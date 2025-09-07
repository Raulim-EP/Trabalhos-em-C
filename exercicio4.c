#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, dado1, dado2, resultado, pontuacao, total = 0, maior= -9999;

    srand(time(NULL));

    printf("Informe o lancamento: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        dado1 = (rand() % 6) + 1;
        dado2 = (rand() % 6) + 1;
        resultado = dado1 + dado2;

        if(resultado == 7 || resultado == 11) {
            pontuacao = 5;
        } else if(resultado == 2 || resultado == 3 || resultado == 12) {
            pontuacao = -2;
        } else {
            pontuacao = resultado;
        }

        total += pontuacao;

        if(pontuacao > maior) {
            maior = pontuacao;
        }

        printf("Lancamento numero %d: dado1=%d, dado2=%d, soma=%d, pontuacao=%d\n", i+1, dado1, dado2, resultado, pontuacao);
    }

    printf("\nPontuacao total acumulada: %d\n", total);
    printf("Maior pontuacao em um lancamento: %d\n", maior);

    return 0;
}
