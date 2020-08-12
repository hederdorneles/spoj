#include <stdio.h>
#include <stdlib.h>
int m[10000],cont=0;
int monte(int numero)
{
	int i;
	for(i=0;i<cont;i++)
	if(m[i]==numero)
	{
		m[i]=-1;
		return 1;
	}
	return 0;//nao encontrou
}

int main()
{
	int n, carta, j, k, vetor[20][2], jogador=0,achou=0,max=0,i;
	while(scanf("%d %d",&n,&j) && n && j)
    {
		for(i=0;i<j;i++)
			vetor[i][1]=vetor[i][0]=0;
		for(i=0;i<n;i++)//ler cartas
		{
			if(i<n-1)
				scanf("%d ",&carta);
			else
				scanf("%d",&carta);
			if (monte(carta))
			{
				vetor[jogador][0] = carta;
				vetor[jogador][1] += 2;
				if(max<vetor[jogador][1] )
					max=vetor[jogador][1];
			}
			else 
			{
			    for(k = 0; k < j; k++)
				{
					if (vetor[k][0] == carta)
					{
						vetor[jogador][0] = carta;
						if(k==jogador)
							vetor[jogador][1] += 1;
						else
						{
							vetor[jogador][1] += vetor[k][1]+1;
							vetor[k][1] = 0;
							vetor[k][0] = 0;
						}
						if(max<vetor[jogador][1] )
							max=vetor[jogador][1];
						achou=1;
						break;
					}
				}
				if(!achou)
				{
					jogador++;
					if(jogador>=j)
						jogador=0;
					m[cont++]=carta;
				}
				achou=0;
			}
			 
		}// for
		achou=0;
		printf("%i",max);
		for (i = 0; i < j; i++)
		{
			if (vetor[i][1] == max)
				printf(" %i",i+1);
				//printf("jogador= %i cartas=%i pcarta=%i\n", i+1,vetor[i][1],vetor[i][0]);
		}
		printf("\n");
		max=0;
		cont=0;
		jogador=0;
	}
	return 0;
}
