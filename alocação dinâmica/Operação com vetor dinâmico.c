#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *valor;
    int cod=0, num=0;

    scanf("%d", &cod);

     while(cod != 0)
     {
        if(cod!= 0 && cod>2)
        {
            cod=0;
        }
        if(cod == 1)
        {
            if(num == 0)
                valor = (float*)malloc(sizeof(float));

            scanf("%f", &valor[num]);
            num++;
        } else if(cod == 2)
        {
            valor=(float*)realloc(valor, num - 1);
            num--;
        }
        scanf("%d", &cod);
    }


    printf("{");
    for(int j=0; j<num; j++)
    {
        if(j == num-1)
        {
             printf("%.1f", valor[j]);
        }
        else
        {
            printf("%.1f, ", valor[j]);
        }
    }
    printf("}\n");


    return 0;
}
