#include "multiplica.h"

void multiplicarMatrizes(int *matriz1, int *matriz2, int *resultado, int linhas1, int colunas1, int colunas2) {
    int i, j, k;

    for (i = 0; i < linhas1; i++) {
        for (j = 0; j < colunas2; j++) {
            resultado[i * colunas2 + j] = 0;
            for (k = 0; k < colunas1; k++) {
                resultado[i * colunas2 + j] += matriz1[i * colunas1 + k] * matriz2[k * colunas2 + j];
            }
        }
    }
}

void transporMatriz(int *matriz, int *transposta, int linhas, int colunas) {
    int i, j;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            transposta[j * linhas + i] = matriz[i * colunas + j];
        }
    }
}

