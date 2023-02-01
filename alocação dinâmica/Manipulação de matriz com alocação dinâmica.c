#include <stdio.h>
#include <stdlib.h>

float **povoa(int lin, int col, float **mat)
{
    int i,j;
    for(i=0; i<lin;i++)
    {
        for(j=0; j<col;j++)
        {
            scanf("%f", &mat[i][j]);
        }
    }
    return mat;
}

void exibe(int lin, int col, float **mat)
{
    int i,j;
    for(i=0; i<lin;i++)
    {
        for(j=0; j<col;j++)
        {
            printf("%.1f ", mat[i][j]);
        }
        printf("\n");
    }
}

float **mult(int lin, int col, float **mat, float num)
{
    int i,j;
    for(i=0; i<lin;i++)
    {
        for(j=0; j<col;j++)
        {
            mat[i][j]*=num;
        }

    }
    return mat;
}

void exibe2(int lin, int col, float **mat)
{
    int i,j;
    for(i=0; i<lin;i++)
    {
        for(j=0; j<col;j++)
        {
            if(mat[i][j]<10)
            {
                printf("0%.2f ", mat[i][j]);
            }
            else{
            printf("%.2f ", mat[i][j]);
            }
        }
        printf("\n");
    }
}


int main()
{
    int linha, col;
    float **matriz, num;

    scanf("%d%d", &linha, &col);

    matriz=(float**)malloc(linha*sizeof(float*));

    for(int i = 0; i<linha; i++)
    {
        matriz[i]=(float*)malloc(col*sizeof(float));
    }

    matriz=povoa(linha, col, matriz);
    exibe(linha, col, matriz);
    scanf("%f", &num);
    printf("Mx%.1f\n", num);
    matriz=mult(linha, col, matriz, num);
    exibe2(linha, col, matriz);

    for(int i = 0; i<linha; i++)
    {
        free(matriz[i]);
    }
    free(matriz);
    return 0;
}
