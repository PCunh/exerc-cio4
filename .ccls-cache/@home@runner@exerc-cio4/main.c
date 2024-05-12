#include <stdio.h>
#include <stdlib.h>
#include "multiplica.h"

int main() {
    int linhas1, colunas1, linhas2, colunas2;

    // Solicita as dimensões da matriz 1
    printf("Digite o número de linhas da matriz 1: ");
    scanf("%d", &linhas1);
    printf("Digite o número de colunas da matriz 1: ");
    scanf("%d", &colunas1);

    // Aloca memória para a matriz 1
    int *matriz1 = (int *)malloc(linhas1 * colunas1 * sizeof(int));

    // Solicita os elementos da matriz 1
    printf("Digite os elementos da matriz 1:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas1; j++) {
            scanf("%d", &matriz1[i * colunas1 + j]);
        }
    }

    // Solicita as dimensões da matriz 2
    printf("Digite o número de linhas da matriz 2: ");
    scanf("%d", &linhas2);
    printf("Digite o número de colunas da matriz 2: ");
    scanf("%d", &colunas2);

    // Aloca memória para a matriz 2
    int *matriz2 = (int *)malloc(linhas2 * colunas2 * sizeof(int));

    // Solicita os elementos da matriz 2
    printf("Digite os elementos da matriz 2:\n");
    for (int i = 0; i < linhas2; i++) {
        for (int j = 0; j < colunas2; j++) {
            scanf("%d", &matriz2[i * colunas2 + j]);
        }
    }

    // Verifica se é possível multiplicar as matrizes
    if (colunas1 != linhas2) {
        printf("Não é possível multiplicar as matrizes. O número de colunas da matriz 1 não é igual ao número de linhas da matriz 2.\n");
        return 1;
    }

    // Aloca memória para o resultado da multiplicação
    int *resultado = (int *)malloc(linhas1 * colunas2 * sizeof(int));

    // Multiplica as matrizes
    multiplicarMatrizes(matriz1, matriz2, resultado, linhas1, colunas1, colunas2);

    // Exibe o resultado da multiplicação
    printf("Resultado da multiplicação:\n");
    for (int i = 0; i < linhas1; i++) {
        for (int j = 0; j < colunas2; j++) {
            printf("%d ", resultado[i * colunas2 + j]);
        }
        printf("\n");
    }

    // Libera memória alocada
    free(matriz1);
    free(matriz2);
    free(resultado);

    return 0;
}
