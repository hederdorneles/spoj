#include <stdio.h>


int main()
{
	register i, j;
    int A, C, vet[100000], aux,andou,cont;
	
	while((scanf("%d %d", &A, &C) > 0) && (A && C) )
	{
		for (i = 0; i < C; i++)
			scanf(" %d", &vet[i]);
		
		aux=A;
		cont=0;
		while(aux>0)
		{
			andou=0;
			for(i=0;i<C;i++)
			{
				if(aux<=vet[i])
				{
					if(andou>0)
					{
						cont++;
						andou=0;
					}
				}
				else
				 andou++;
			}
			if(andou>0)
			  cont++;
			aux--;
		}
		printf("%i\n",cont);
	}
	return(0);
}
