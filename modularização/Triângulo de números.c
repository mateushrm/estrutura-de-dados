#include <stdio.h>
void triangulo(int n)
{
    if(n==1)
    {
        printf("1");
    } else
    {
        triangulo(n-1);
        for(int i=0; i < n; i++)
        printf("%d ", n);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    
    triangulo(n);
    

    return 0;
}
