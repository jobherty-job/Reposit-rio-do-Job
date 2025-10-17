#include <stdio.h>
int main() {
    int p, s;
    printf("Digite o primeiro numero: ");
    scanf("%d", &p);
    printf("Digite o segundo numero: ");
    scanf("%d", &s);
    if (p % s == 0 || s % p == 0) {
        printf("Sao multiplos\n");
    } else {
        printf("Não sao multiplos\n");
    }
    return 0;
}