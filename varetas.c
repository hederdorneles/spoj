#include <stdio.h>

main()
{
    int b=0,a=0,cont=0, n, comp, quant,aux;
    int *pro=&b;
    while(scanf("%d",&n) && n>0&&n<=1000)
    {
	for(aux=0;aux<n;aux++)
	{
	  scanf("%d %d",&comp, &quant);
	  while(quant>1)
	  {
	    quant-=2;
	    *pro+=2;
	    pro=&a;
	    if(b==2 && a==2)
	    {
	      cont++;
	      b=a=0;
	      pro=&b;
	    }
	  }
        }
	printf("%i\n",cont);
	pro=&b;
	cont=b=a=0;
    }
    
}