#include <stdio.h>
 int main() {
   int i;
   int a[10], b[10]; 
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
 }
    for (i = 0; i < 10; i++) {
        b[i] = a[9 - i];
    }
    printf("Vetor invertido:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }
    return 0;
 }