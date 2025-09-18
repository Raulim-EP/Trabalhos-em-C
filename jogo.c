#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palavra[10] = {};
char dica[10] = {};
char oculto [10] = {};
char traco [] = {"-"};
int n_palavra, tentativa = 5, acertou;
char letra[10] = {};

int main(){

    printf("Digite a palavra para secreta: ");
    scanf("%s", palavra);
    printf("Digite o dica: ");
    scanf("%s", dica);
    n_palavra = strlen(palavra);
    for(int i = 0; i < n_palavra; i++){
        oculto[i] = '-';
    }
    
    while(1){
    system("cls || clear");
    printf("\n==========Jogo da forca==========\n");
    for(int i = 0; i < n_palavra; i++){
        printf("+---+  ");
    }
    printf("\n");
    for(int i = 0; i < n_palavra; i++){
        printf("| %c |  ", oculto[i]);
    }
    printf("\n");
    for(int i = 0; i < n_palavra; i++){
        printf("+---+  ");
    }
    printf("\nVoce tem %i tentativas", tentativa);
    printf("\nDica: %s", dica);
    printf("\ndigite uma letra: ");
    scanf("%s", letra);
    acertou = 0;
    for(int i = 0; i < n_palavra; i++){
        if(palavra[i] == letra[0]){
            oculto[i] = letra[0];
            acertou = 1;
        }
    }
    
    if(acertou == 0){
        tentativa --;
    }
    if(strcmp(oculto, palavra) == 0){
        printf("Parabens !!!\n Acertou");
        break;
    }
    else if(tentativa == 0){
        printf("     _____\n");
        printf("    /     \\\n");
        printf("   | () () |\n");
        printf("    \\  ^  /\n");
        printf("     |||||\n");
        printf("     |||||\n");
        printf("Voce perdeu !!!!");
        break;
    }
    }
    return 0;
}