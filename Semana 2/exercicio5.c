//faça um programa que receba uma palavra e apresente em ordem invertida

#include <stdio.h>
#include <string.h>
char word[20];
int n_word;
int main(){

    printf("\nInsira a palavra: ");
    gets(word);
    n_word = strlen(word);
    for(int i = n_word ; i >= 0; i--){
        printf("%c", word[i]);


    }
    return 0;
}