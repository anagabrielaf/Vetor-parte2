#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese");
int vetor[10], i, j, iguais = 0;

     
    for (i = 0; i < 10; i++) {
        printf("Insira o valor da posi��o %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("Os valores %d e %d s�o iguais.\\\\n", vetor[i], vetor[j]);
                iguais = 1;
            }
        }
    }
    if (!iguais) {
        printf("N�o h� valores iguais.\\\\n");
    }
    
    

    

    

	return 0;
}
