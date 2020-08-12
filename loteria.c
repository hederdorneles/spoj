#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c,tam,min,aux,n;
    int k[110];
    register i,j;
    while(scanf("%d %d %d",&n,&c,&tam)&&n)
    {
        
        memset(k,0,sizeof(k));
        min=9999;
        for(i=0;i<n;i++)
        {
          for(j=0;j<c;j++)
          {
              scanf("%d",&aux);
              k[aux]++;
          }
          
        }
        for(j=1;j<=tam;j++)
        {
          if(k[j]<min)
            min=k[j];
        }
        for(j=1;j<=tam;j++)
        {
          if(k[j]==min)
            printf("%i ",j);
        }
        printf("\n");
    }
    return(0);
}
