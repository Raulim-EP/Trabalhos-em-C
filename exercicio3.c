#include <stdio.h>

int dia = 0, mes, escolha = 1, maior = -9999, menor = 9999, temp, media_dia;

int main(){ 
    printf("\nInforme qual o mes do registro (1-12): ");
    scanf("%d", &mes);

    while(1){
        dia++;
        printf("\nContinuar: (1)sim (2)nao\n");
        scanf("%d", &escolha);
        if(escolha == 2){
            break;
        }
        media_dia = 0;
        printf("\nRegistro dia %d\n", dia);

        for(int i = 0; i < 12; i++){
            printf("\n==== Registro de temperatura ====\n");
            printf("Verificacao %d: Insira a temperatura: ", i+1);
            scanf("%d", &temp);

            if (temp > maior) {
                maior = temp;}
            if (temp < menor) {
                menor = temp;}

            media_dia += temp;
        }

        printf("\nMedia de temperatura do dia %d: %d\n", dia, media_dia / 12);
    }

    printf("\nMaior temperatura registrada no mes %d: %d", mes, maior);
    printf("\nMenor temperatura registrada no mes %d: %d\n", mes, menor);

    return 0;
}
