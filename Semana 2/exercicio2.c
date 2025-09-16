//implemente um programa que receba n palavras e pare quando for digitado "fim"
//apresente o numero de palavras c/ tamanho impar
// total palavras

#include <stdio.h>
#include <string.h>

char escolha[3];
char words[46];
int caracter, impar, total_words;

int main(){

    while(1){

        printf("\nDeseja digitar uma palavra:(1)-sim (2)-nao\n");
        gets(escolha);
        if(strcmp(escolha, "2") == 0)
            break;
        gets(words);
        caracter = strlen(words);
        total_words ++;
        if(!(caracter % 2 == 0)){
            impar++;            
        }

    }
    printf("\nQuantidades de palavras impares: %d", impar);
    printf("\nTotal de palavras: %i", total_words);
    return 0;
}