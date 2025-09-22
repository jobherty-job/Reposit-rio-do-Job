#include <stdio.h>
int main() {
    int n,i;
    n = 10;
    int a[n];
    int soma = 0;
    for (int i = 0; i < n; i++) {
        printf("Digite o %d elemento do vetor: ", i + 1);
    scanf("%d", &a[i]);
     soma = soma + a[i];  
}
 printf("A soma dos elementos do vetor e: %d\n", soma);
return 0;
}