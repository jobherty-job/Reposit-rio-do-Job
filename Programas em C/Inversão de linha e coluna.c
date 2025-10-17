#include <stdio.h>
int main() {
    int matriz[3][3], matrizInvertida[3][3];
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizInvertida[i][j] = matriz[i][2 - j];
        }
    }
    printf("Matriz com linhas invertidas:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizInvertida[i][j]);
        }
        printf("\n");
    }
    return 0;
}