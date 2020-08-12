#include <stdio.h>

long long fat[1000001];

void fatorial(){
     int i=0;
     long long n=0;
     fat[0] = 1;
     for (i=1; i<1000001; i++)
     {
        n = fat[i-1]*i;
        while(n%10==0) n/=10;
        fat[i] = n%10000000;
     }
}

int main()
{
  int n, teste=0;
  long long aux,aux1;
  fatorial();
//  for(n=0;fat[n]>0;n++)
  while (scanf("%d", &n) == 1)
  {
        aux=fat[n];
        if(aux>10)
        {aux1=aux/10;
        aux=aux-(aux1*10);}
        printf("Instancia %d\n%i\n\n", ++teste,aux);
  }
  return 0;
}
