#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int largada[2000],n,c,p,cont,flag;
    register i;
    char vet[10];	
    while(scanf("%d",&n)&&n)
    {
        memset(largada,-1,sizeof(largada));
        flag=0;
        for(i=1;i<=n;i++)
        {
            scanf("%d %d",&c,&p);
            cont=i+p;
            if(cont>0&&cont<=n&&largada[cont]==-1)
                largada[cont]=c;
            else
            {
                flag=1;
                for(++i;i<=n;i++)
                  scanf("%*d %*d");
                break;
            }
        }
        if(flag)
            printf("-1\n");
        else
        {
          for(i=1;i<n;i++)
          {
              printf("%i ", largada[i]);
          }
          printf("%i\n", largada[i]);
        }
    }
    return 0;
}
