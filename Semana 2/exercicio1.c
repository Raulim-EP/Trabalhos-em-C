#include <stdio.h>
#include <string.h>

char words[46];
char bgwords[46];
int tamanho, maior, caracter = 0, media;

int main(){

    for(int i = 0; i < 10; i++){
        printf("Insira %i palavra: ", i+1);
        gets(words);
        tamanho = strlen(words);
       
        if (tamanho > maior){
            maior = tamanho;
            strcpy(bgwords, words);
        }
        caracter += tamanho;
    }
    media = caracter / 10;
    printf("\nNumero de caracteres total: %d", caracter);
    printf("\nMaior palavra: ");
    puts(bgwords);
    printf("\nMedia de caracteres: %i", media);
    return 0;
}