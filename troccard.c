#include <stdio.h>
#include <string.h>
int a[10005],b[10005],aa[10005],bb[10005],contAA,contBB;

int main()
{
	register i,j;
    int auxA,auxB,contA,contB,inicio,fim,meio,numero,achou;
	while(scanf("%d %d",&auxA,&auxB)>0&&auxA&&auxB)
	{
		for(i=0;i<auxA;i++)
		   scanf("%d",&a[i]);
		for(i=0;i<auxB;i++)
		   scanf("%d",&b[i]);
		contA=0;
		contAA=0;
		for(i=0;i<auxA;i++)
		{
			inicio=0;
			numero=a[i];
			fim=auxB-1;
			achou=0;
			while(inicio<=fim)
			{
				meio=(inicio+fim)/2;
				if(numero==b[meio])
				{
					achou=1;
					break;
				}
				else
				 if(numero<b[meio])
					fim=meio-1;
				 else
					inicio=meio+1;
			}
			if(!achou)
			{
				if(contAA>0)//procura novamento o numero
				{
					inicio=0;
					fim=contAA-1;
					achou=0;
					while(inicio<=fim)
					{
						meio=(inicio+fim)/2;
						if(numero==aa[meio])
						{
							achou=1;
							break;
						}
						else
						 if(numero<aa[meio])
							fim=meio-1;
						 else
							inicio=meio+1;
					}
					if(!achou)
					{
					 aa[contAA++]=numero;
					 contA++;
				    }
			    }
				else
				{
					aa[contAA++]=numero;
					contA++;
				}
		    }
		}
		contB=0;
		contBB=0;		
		for(i=0;i<auxB;i++)
		{
			inicio=0;
			numero=b[i];
			fim=auxA-1;
			achou=0;
			while(inicio<=fim)
			{
				meio=(inicio+fim)/2;
				if(numero==a[meio])
				{
					achou=1;
					break;
				}
				else
				 if(numero<a[meio])
					fim=meio-1;
				 else
					inicio=meio+1;
			}
			if(!achou)
			{
				if(contBB>0)
				{
					inicio=0;
					fim=contBB-1;
					achou=0;
					while(inicio<=fim)
					{
						meio=(inicio+fim)/2;
						if(numero==bb[meio])
						{
							achou=1;
							break;
						}
						else
						 if(numero<bb[meio])
							fim=meio-1;
						 else
							inicio=meio+1;
					}
					if(!achou)
					{
					 bb[contBB++]=numero;
					 contB++;
				    }
			    }
				else
				{
					bb[contBB++]=numero;
					contB++;
				}
		    }
		}			
		printf("%i\n",contA<contB?contA:contB);
	}
	return(0);
}
