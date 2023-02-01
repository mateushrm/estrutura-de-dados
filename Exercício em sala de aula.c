#include <stdio.h>
#include <stdlib.h>

int *povoar(int dia[])
{
    int i;
    for(i = 0; i < 3; i++)
    {
        scanf("%d", &dia[i]);
    }

    return dia;
}

int **alocarMat(int dia[])
{
    int **mat;
    mat=(int**)calloc(3, sizeof(int*));

    if(mat!=NULL)
    {
        for(int i = 0; i < 3; i++)
            mat[i] = (int*)calloc(dia[i], sizeof(int));
    }

    return mat;
}

int **obterMat(int **mat, int dia[])
{
    for(int i = 0; i < 3; i++)
        {
        if(dia[i]!=0)
        {
            for(int j=0; j<dia[i]; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }
    }

    return mat;
}

void exibirMat(int **mat, int dia[], int diaSel)
{
    printf("Lista do dia: %d\n", diaSel);
    if(dia[diaSel - 1] == 0)
        printf("Sem participantes no dia\n");
    else {
        for(int i = 0; i<dia[diaSel-1]; i++)
        {
            printf("%d\n", mat[diaSel-1][i]);
        }
    }
}

void liberar(int **mat, int dia[])
{
    for(int i = 0; i < 3; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

int main() {
    int dia[3], diaSel = 0;

    povoar(dia);
    int **mat = alocarMat(dia);

    alocarMat(dia);
    obterMat(mat, dia);

    scanf("%d", &diaSel);

    exibirMat(mat, dia, diaSel);
    liberar(mat, dia);

    return 0;
}
