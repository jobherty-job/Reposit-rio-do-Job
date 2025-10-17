#include <stdio.h>
int main() {
    int n,i;
    n = 15;
    int a[n];
    int maior, menor;
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº numero de elementos: ", i+1);
        scanf("%d", &a[i]);
        maior = a[0];
        menor = a[0];
        if (a[i] > maior) {
            maior = a[i];
            if (a[i] < menor) {
                menor = a[i];
            }
        }
    }
    printf("O maior numero é: %d\n", maior);
    printf("O menor numero é: %d\n", menor);
    return 0;
}