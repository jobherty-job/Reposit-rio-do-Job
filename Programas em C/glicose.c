#include <stdio.h>
#include <string.h>


int main() {
    int glicose;
    printf("Digite o valor da glicose: ");
    scanf("%d", &glicose);
    if (glicose <= 100) {
        printf("Glicose normal.\n");
        }else if (glicose > 100 && glicose <= 140) {
            printf("Glicose alta.\n");
        } else {
            printf("Glicose muito alta.\n");
        }
    }