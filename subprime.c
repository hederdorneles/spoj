#include <stdio.h>

int main()
{
	int B, N, i;
	int devedor, credor, valor;
	int deve = 0;
	int reserva[21];
	
	while(scanf("%d %d", &B, &N)>0)
	{
		for(i=0; i<21; i++) reserva[i] =0;
		if(B==0 && N==0) return 0;
		
		for(i=0; i<B; i++)
			scanf("%d", &reserva[i]);
		
		for(i=0; i<N; i++)
		{
			scanf("%d %d %d", &devedor, &credor, &valor );
			//printf("%d %d %d\n", devedor, credor, valor );
			reserva[devedor-1] -= valor;
			reserva[credor-1] += valor;
		}
		
		for(i=0; i<B; i++)
		{
			if(reserva[i]<0)
			{
				deve = 1;
			}
		}
		
		if(deve==1)printf("N\n");
		else printf("S\n");
		deve = 0;
	}
	
	return 0;
}
