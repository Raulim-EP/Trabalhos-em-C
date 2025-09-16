#include <stdio.h>
#include <string.h>
//implemente um programa que receba uma palavra e apresente as letras desta palavra em cada linha;
char palavra[100];
int indice;

int main(){


    gets(palavra);
    indice = strlen(palavra);

    for(int i = 0; i < indice; i++){
        printf("\n%c", palavra[i]);
    }
    

    return 0;
}