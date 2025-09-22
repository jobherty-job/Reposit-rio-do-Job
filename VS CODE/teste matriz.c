#include <stdio.h>
int main()
{
    int i, j, matriz[3][2];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("digite um termo da matriz:")
                scanf("%d", &matriz[3][2]);
        }
    }
    printf("A Matriz digitada foi:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("%d", matriz[i][j]);
    }
    printf("\n");
    return 0;
}