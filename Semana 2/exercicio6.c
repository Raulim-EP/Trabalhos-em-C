//implemente um programa que codifique uma palavra(vogais)
#include <stdio.h>
#include <string.h>

char word[10];
int n_word;
char vogal[] = {"AaEeIiOoUu"};
char codigo[] = {"1122334455"};

int main(){

    printf("Insira uma palavra para decodificacao: ");
    gets(word);
    n_word = strlen(word);
    for(int i = 0; i < n_word; i++){
        for(int j = 0; j < 10; j++){
            if(word[i] == vogal[j]){
                word[i] = codigo[j];
            }
        }
    }
    printf("\nPalavra codificada: ");
    puts(word);
    return 0;
}