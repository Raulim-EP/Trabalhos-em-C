#include <stdio.h>

int fim, bpm, bp, bpmg,  tempo, bpmM, tempt, minutos, totalv, natleta;
float velm, velocidade_media, velocidadem_geral;
char nome [20] = {};

int main(){

    while(1){
         printf("\n\ndeseja Continuar: (1)sim (2)nao\n");
         scanf("%d", &fim);
         if(fim == 2){
            break;
         }
         printf("\nQual seu nome:");
         scanf("%s", nome);
         natleta ++;
         for(int i = 0; i < 15; i++){
            printf("\n%s essa e sua %d volta!", nome, i+1);
            printf("\nInforme o bpm dessa volta: ");
            scanf("%d", &bp);
            if(bp > bpmg){
                bpmg = bp;
            }
            printf("\nInforme quanto tempo durou essa volta em segundos:");
            scanf("%d", &tempo);
            printf("\nInforme a velocidade media dessa volta:");
            scanf("%f", &velm);
            bpm += bp;
            tempt += tempo;
            velocidade_media += velm;

         }
         velocidade_media  = velocidade_media  / 15;
         velocidadem_geral += velocidade_media;
         bpmM = bpm / 15;
         totalv = tempt / 60;
         minutos = tempt % 60;
         tempt = 0;
         printf("\n\nTempo total da volta: %.2d:%.2d", totalv, minutos);
         printf("\nMedia de bpm da corrida: %d bpm ", bpmM);
         bpmM = 0;
         bpm = 0;
         velocidade_media = 0;
    }
    if(natleta > 0){
        velocidadem_geral = velocidadem_geral / natleta;
        printf("\nFim da corrida!!!\n");
        printf("\nVelocidade geral de %d atleta(s): %.2f km/h", natleta, velocidadem_geral);
        printf("\nMaior bpm registrado foi: %d", bpmg);
    }
    else{
        printf("\nNenhum atleta registrado\nSaindo....");
    }
    return 0;
}