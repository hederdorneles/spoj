#include <stdio.h>
#include <stdlib.h>

struct Tmat{
    int x;
    int y;
    int retX,retY,dP,dS; // talvez utilize
}mat[1001];


int main()
{
    int x, y, i,j,t,n,cont;
    int max = 0;
    scanf("%d", &t);
    for(i = 0; i < t; i++)
    {
        scanf("%d", &n);
        max=0;
        //printf("%d\n", n);
        for(j = 0; j < n; j++)
        {
            scanf("%d %d", &mat[j].x, &mat[j].y);
            mat[j].retX=mat[j].retY=mat[j].dP=mat[j].dS=0;
            for(cont=0;cont<j;cont++)
            {
                if(mat[j].x==mat[cont].x)
                {
                   if(++mat[j].retX>max)
                      max=mat[j].retX;
                }
                else
                if(mat[j].y==mat[cont].y)
                {
                    if(++mat[j].retY>max)
                      max=mat[j].retY;
                }
                else
                if(mat[j].y-mat[j].x==mat[cont].y-mat[cont].x)
                {
                    if(++mat[j].dP>max)
                      max=mat[j].dP;
                }
                else
                if(mat[j].x-mat[cont].y==mat[cont].x-mat[j].y)
                {
                    if(++mat[j].dS>max)
                      max=mat[j].dS;
                }
            }
        }
        printf("%i\n", max+1);
    }
    return(0);
}
