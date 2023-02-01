#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct livro
{
char nome[50];
char isbn[21];
float preco;
float avaliacao;
char editora[50];
}tlivro, *plivro;

plivro aloca_livro(int n)
{
  if(n>0)
  return (plivro)malloc(n*sizeof(tlivro));
  if(n<0 || n==0)
  printf("[Nenhum registro lido]");
  return NULL;
}

void dados_livro(int qntddLivro, tlivro *livro)
{
  int i;
  for(i=0; i<qntddLivro; i++)
  {
  scanf(" %[^\n]", livro[i].nome);
  scanf(" %[^\n]", livro[i].isbn);
  scanf("%f", &livro[i].preco);
  scanf("%f", &livro[i].avaliacao);
  scanf(" %[^\n]", livro[i].editora);
  }
}

void exibe(int qntddLivro,tlivro *livro)
{
  int i;
  for(i=0; i<qntddLivro; i++)
  {
  printf("[Registro %d]\n", i+1);
  printf("Nome: %s\n", livro[i].nome);
  printf("ISBN: %s\n", livro[i].isbn);
  printf("Preço: R$ %.2f\n", livro[i].preco);
  printf("Avaliação: %.1f\n", livro[i].avaliacao);
  printf("Editora: %s\n", livro[i].editora);
  }
}


int main(void) {

  setlocale(LC_ALL,"Portuguese");
  tlivro *livro;
  int n;
  scanf("%d", &n);
  livro = aloca_livro(n);
  dados_livro(n, livro);
  exibe(n, livro);

  free(livro);

  return 0;
}
