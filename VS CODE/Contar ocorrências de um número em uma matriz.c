#include <stdio.h>
int main() {
    int matriz[4][4], numero, contador = 0;
    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite o numero a ser contado: ");
    scanf("%d", &numero);
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                contador++;
            }
        }
    }
    printf("O numero %d aparece %d vezes na matriz.\n", numero, contador);
    return 0;
}