#include<stdio.h>
#include<stdlib.h>

typedef struct celula {
    int ponto;
    int inicio;
    int fim;
}celula;
int compare(const void *a, const void *b)
{
    celula *ia = (celula *)a;
    celula *ib = (celula *)b;
    return (int)(ia->fim - ib->fim);
} 

int calcula2(celula *vetor, int tam)
{
	int max=0,maxP;
        int j,i;
	if(tam>0)
	{
            for(i=tam-2;i>-1;i--)
            {
              maxP=0;
              for(j=i+1;j<tam;j++)
                if(vetor[i].fim<=vetor[j].inicio&&maxP<vetor[j].ponto)
                  maxP=vetor[j].ponto;
              vetor[i].ponto+=maxP;
            }
          max=vetor[0].ponto;
          for(i=1;i<tam;i++)
          {
             if(max<vetor[i].ponto)
              max=vetor[i].ponto;
          }
	}
	return max;
}
int main()
{
    int i,ent,x,y,z;
    char aux[4];
    int contSeg,contTer,contQua,contQui,contSex;
    celula *seg,*ter,*qua,*qui,*sex,vetor;

    while (scanf("%d",&ent)>0 && ent)
    {
        seg=(celula *)malloc(sizeof(celula)*ent);
        ter=(celula *)malloc(sizeof(celula)*ent);
        qua=(celula *)malloc(sizeof(celula)*ent);
        qui=(celula *)malloc(sizeof(celula)*ent);
        sex=(celula *)malloc(sizeof(celula)*ent);
        contSeg=contTer=contQua=contQui=contSex=0;
        for (i=0;i<ent;i++)
        {
            scanf("%d %d %s %d:%d %d:%d",&z,&vetor.ponto,aux,&vetor.inicio,&x,&vetor.fim,&y);
            vetor.inicio=vetor.inicio*100+x;
            vetor.fim=vetor.fim*100+y;

            switch(aux[2])
            {
                case 'g':
                    seg[contSeg++]=vetor;
                    break;
                case 'r':
                    ter[contTer++]=vetor;
                    break;
                case 'a':
                    qua[contQua++]=vetor;
                    break;
                case 'i':
                    qui[contQui++]=vetor;
                    break;
                case 'x':
                    sex[contSex++]=vetor;
            }

        }
        qsort (seg, contSeg, sizeof(celula), compare);
        qsort (ter, contTer, sizeof(celula), compare);
        qsort (qua, contQua, sizeof(celula), compare);
        qsort (qui, contQui, sizeof(celula), compare);
        qsort (sex, contSex, sizeof(celula), compare);
        contSeg=calcula2(seg,contSeg);
        contTer=calcula2(ter,contTer);
        contQua=calcula2(qua,contQua);
        contQui=calcula2(qui,contQui);
        contSex=calcula2(sex,contSex);
	
        printf("Total de pontos: %i\n",contSeg+contTer+contQua+contQui+contSex);
        printf("Seg: %i\n",contSeg);
        printf("Ter: %i\n",contTer);
        printf("Qua: %i\n",contQua);
        printf("Qui: %i\n",contQui);
        printf("Sex: %i\n",contSex);
    }
    return 0;
}
