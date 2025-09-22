#include <stdio.h>
int main () {
    int resultado;
    char f, c;
    printf("Digite qual medida deseja converter (F para Fahrenheit ou C para Celsius): ");
    scanf(" %c", &f);
    if (f == 'F' || f == 'f') {
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%d", &resultado);
        resultado = (resultado - 32) * 5 / 9;
        printf("Temperatura em Celsius: %d\n", resultado);
    } else if (f == 'C' || f == 'c') {
        printf("Digite a temperatura em Celsius: ");
        scanf("%d", &resultado);
        resultado = (resultado * 9 / 5) + 32;
        printf("Temperatura em Fahrenheit: %d\n", resultado);
    } else {
        printf("Opção inválida.\n");
    }
}