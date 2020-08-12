#include <stdio.h>

int horas(int h1, int h2)
{
	int cont = 0, hora = 0;
	while(hora!=h2)
	{
		hora++;
		cont++;
		if(hora==24)
		    hora=0;
	}
	printf("\t%d\n", cont+h1);
	return(cont+h1);
}

void alarme(int h1,int m1,int h2,int m2)
{
	int minutos1, minutos2;
	minutos1 = (h1*60) + m1;
	if(h2<h1)
	 minutos2=(24+h2)*60+m2;
	else
	{
		if(h1==h2&&m2<m1)
		{	
		  minutos2=(24+h2)*60+m2; 
		}
		 else
		 minutos2 = (h2*60) + m2;
    }
	
	
	printf("%d\n",(minutos2-minutos1));
}

int main ()
{
	int h1, h2, m1, m2;
	while(scanf("%d %d %d %d", &h1, &m1, &h2, &m2)>0 && !(h1==0 && m1==0 && h2==0 && m2==0))
	{
		alarme(h1, m1, h2, m2);
	}
	return 0;
}
		
