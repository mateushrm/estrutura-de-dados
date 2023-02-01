#include <stdio.h>

int main(void) 
{
  int a, b;
  scanf("%d%d", &a,&b);
  int dados[a][b];
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<b; j++)
    {
      scanf("%d", &dados[i][j]);
    }
  }
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<b; j++)
    {
      printf("%.2d ", dados[i][j]);
    }
    printf("\n");
  }

  return 0;
}