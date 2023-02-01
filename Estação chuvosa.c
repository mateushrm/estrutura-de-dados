#include <stdio.h>

int main(void) 
{
  int qntdChuva[10], cont=0;
  
  for(int i=0; i<10; i++)
  {
      scanf("%d", &qntdChuva[i]);
      if(i==0)
      {
          cont=qntdChuva[i];
      }
      else
      {
       if(cont<qntdChuva[i])
       {
            cont=qntdChuva[i];
       }
      }
  }
  printf("%d", cont);

  return 0;
}