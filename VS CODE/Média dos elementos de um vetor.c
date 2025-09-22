#include <stdio.h>
 int main() {
    int i, soma;
    double media;
    soma = 0;
    media = 0;
    int a[8];
    for (i = 0; i < 8; i++) {
        printf("Digite o %d numero de elementos: ", i+1);
        scanf("%d", &a[i]);
        soma += a[i];
    }
    media = soma / 8.0;
    printf("A media dos elementos do vetor e: %.2lf\n", media);
    return 0;
}