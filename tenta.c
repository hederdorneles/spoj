#include <stdio.h>
#include <stdlib.h>

static int cmpr(const void *a, const void *b) { 
  return (*(long*)a - *(long*)b);
}
void ordenar(void *array, unsigned n) 
{ 
  qsort(array, n, sizeof(long *), cmpr);
}
int aux[10],auxCont,n;
long vet[10];
void gerar(int cont)
{
  int i,j,teste;
  if(cont==0)
  {
    for(i=0;i<auxCont;i++)
    {
      printf("%i ",vet[aux[i]]);
    }
    printf("\n");
  }
  else
  {
    for(i=0;i<n;i++)
    {
      teste=1;
      for(j=0;j<auxCont;j++)
        if(i==aux[j])
        {
          teste=0;
          break;
        }
      if(teste)
      {
        aux[auxCont++]=i;
        gerar(cont-1);
        auxCont--;
      }
    }
  }
}
int main(void)
{
  int i;
  int mat[10][10];
  
  while(scanf("%d",&n) && n)
  {
    auxCont=0;
    for(i=0; i<n; i++)
      scanf("%d",&vet[i]);
    ordenar(vet,i);
    gerar(i);
    printf("\n");
  }
  return (0);
}
