#include <stdio.h>
#include <locale.h>
#define TAM 10

int main() {
	setlocale(LC_ALL, "Portuguese");
    int vetor[TAM], i, x, count = 0;

    for (i = 0; i < TAM; i++) {
        printf("Digite o valor do elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &x);

    // Conta os m�ltiplos de x no vetor
    for (i = 0; i < TAM; i++) {
        if (vetor[i] % x == 0) {
            count++;
            printf("%d � m�ltiplo de %d\\n", vetor[i], x);
        }
    }

    printf("O vetor tem %d m�ltiplos de %d\\n", count, x);

    
    return 0;
}

