#include <stdio.h>
int main () {
    int codigo, quantidade;
    float valor;
    printf("Digite o codigo do produto (1-5): ");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);
    switch(codigo) {
        case 1:
            valor = 5.00 * quantidade;
            break;
        case 2:
            valor = 3.50 * quantidade;
            break;
        case 3:
            valor = 4.80 * quantidade;
            break;
        case 4:
            valor = 8.90 * quantidade;
            break;
        case 5:
            valor = 7.32 * quantidade;
            break;
        default:
            printf("Código inválido!\n");
            return 1;
    }
    printf("Valor total a pagar: R$ %.2f\n", valor);
    return 0;
}