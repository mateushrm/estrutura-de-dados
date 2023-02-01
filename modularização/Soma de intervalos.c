#include <stdio.h>

int soma(int n1, int n2)
{
    int resultado=0;
    if(n1==n2){
        resultado= n1+n2;
    }
    if(n1>n2)
    {
        for(int i=n2; i<=n1; i++)
        {
         resultado += i;
        }
    } else{
        if(n1<n2 || n1<0){
        for(int i=n1; i<=n2; i++)
        {
         resultado += i;
        }
        }
    }
    return resultado;
}


int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d", soma(n1,n2));
    return 0;
}
