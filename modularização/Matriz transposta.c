#include <stdio.h>
#include <stdlib.h>

void transposta(int matriz[2][3])
{
    int i,j;
     for(j=0; j<3;j++)
    {
        for(i=0; i<2;i++)
        {
        printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int matriz[2][3], i, j;

    for(i=0; i<2;i++)
    {
        for(j=0; j<3;j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i=0; i<2;i++)
    {
    for(j=0; j<3;j++)
    {
    printf("%d ", matriz[i][j]);
    }
    printf("\n");
    }
    printf("\n");
    transposta(matriz);

    return 0;
}
