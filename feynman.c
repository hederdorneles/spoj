//Problema: FEYNMAN
//RESOLVIDO

#include<stdio.h>
//#include<stdlib.h>

unsigned int feynman(unsigned int n)
{
         if(n==0)
                 return 0;
         else
         {
             return ((n*n)+feynman(n-1));
         }
}

int main()
{
    unsigned int n=1;
    while((scanf("%d",&n)>0)&&(n>0))
    {
            printf("%d\n",feynman(n));
    }
    //system("pause");
    return 0;
}
