#include <stdio.h>
#include <stdlib.h>
typedef struct L{
	int numero;
	struct L *prox;
}L;
L *histP=NULL;

void criaNoP(int i)
{
	L *aux;
	aux=(L*)(malloc(sizeof(L)));
	aux->numero=i;
	aux->prox=histP;
	histP=aux;
}
int passos(int numero,int *p)
{
	L *aux=histP;
	int pass=0;
	while(aux!=NULL)
	{
		if(aux->numero==numero)
		{
			*p=++pass;
			return 1;
		}
		aux=aux->prox;
		pass++;
	}
	*p=pass;
	return 0;
}

int main()
{
	int n,num,i,cima=0,passo=0,enc=0;
	L *aux2,*aux3;
	while(scanf("%d",&n) && n>0&&n<=1000)
    {
		for(i=0;i<n;i++)
		{
			if(i<n-1)
				scanf("%d ",&num);
			else
				scanf("%d",&num);
			enc = passos(num,&passo);
			if(enc) // se encontrou o numero no vetor
				cima+=passo;//soma com este numero
			else
				cima+=num+passo;//se nao encontrou  soma com o proprio numero
			criaNoP(num);
		}
		printf("%i\n",cima);
		cima=0;
		aux2=histP;
		while(aux2!=NULL)
		{
			aux3=aux2;
			aux2=aux2->prox;
			free(aux3);
		}
		histP=NULL;
	}
	return 0;
}
