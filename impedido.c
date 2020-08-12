#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,d,menorA=0,menorD=0,menorD2=0,num,i;
	while(scanf("%d %d",&a,&d) && a && d)
    {
		for(i=0;i<a;i++)
		{
			if(i<a-1)
				scanf("%d ",&num);
			else
				scanf("%d",&num);
			if(i==0)
				menorA=num;
			if(menorA>num)
				menorA=num;
		}
		for(i=0;i<d;i++)
		{
			if(i<d-1)
				scanf("%d ",&num);
			else
				scanf("%d",&num);
			if(i==0)
				menorD=num;
			else
			if(i==1)
			{
				if(menorD>=num)
				{
					menorD2=menorD;
					menorD=num;
				}
				else
					menorD2=num;
			}
			else
			if(menorD2>=num)
			{
				if(menorD>num)
				{
					menorD2=menorD;
					menorD=num;
				}
				else
				menorD2=num;
			}
		}
		if(menorA<menorD2)
			printf("Y\n");
		else	
			printf("N\n");
		//printf("%i %i %i",menorA,menorD,menorD2);
		menorA=menorD=menorD2=0;
	}
	return 0;
}
