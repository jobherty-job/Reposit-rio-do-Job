#include <stdio.h>
int main() {
    int i,n;
    int a[10];
    printf("Digite o numero que busca:\n");
    scanf("%d", &n);
    for (i = 0; i <10; i++) {
        printf("Digite o %d numero do vetor: ", i+1);
        scanf("%d", &a[i]);
        if (a[i] == n) {
            printf("Achei o numero %d na posicao %d do vetor.\n", n, i);
            break;
        } else {
            printf("Numero %d nao encontrado na posicao %d do vetor.\n", n, i);
        }
    } 
    return 0;
}