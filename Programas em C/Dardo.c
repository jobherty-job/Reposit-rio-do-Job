#include <stdio.h>
int main() {
    int p,s,t;
    printf("Digite a distancia pecorrida (em metros ) do primeiro dardo: ");
    scanf("%d", &p);
    printf("Digite a distancia pecorrida (em metros ) do segundo dardo: ");
    scanf("%d", &s);
    printf("Digite a distancia pecorrida (em metros ) do terceiro dardo: ");
    scanf("%d", &t);
    if (p > s && p > t) {
        printf("Primeiro dardo foi o mais longe, com %d metros\n", p);
    } else if (s > p && s > t) {
        printf("Segundo dardo foi o mais longe, com %d metros\n", s);
    } else if (t > p && t > s) {
        printf("Terceiro dardo foi o mais longe, com %d metros\n", t);
    }
}