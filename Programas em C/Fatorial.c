#include <stdio.h>
int main() {
    int i, n, fatorial = 1;
    printf("Digite o numero que busca o fatorial: \n");
    scanf("%d", &n);
    for (i = n; i > 1; i--) {
        fatorial *= i;
    }
    printf("O fatorial de %d e: %d\n", n, fatorial);
    return 0;
}