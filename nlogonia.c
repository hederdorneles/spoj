#include <stdio.h>

main()
{
    int b=0,xCasa=0,yCasa=0, k, comp, quant,aux;
    int xc,yc;
    while(scanf("%d",&k) && k>0&&k<=1000)
    {
		scanf("%d %d",&xc, &yc);
		for(aux=0;aux<k;aux++)
		  {
				scanf("%d %d",&xCasa, &yCasa);
				if(xCasa==xc||yCasa==yc)
					printf("divisa\n");
				else
				if(xCasa>xc)
				{
					if(yCasa>yc)
						printf("NE\n");
					else
						printf("SE\n");	
				}
				else
				{
				    if(yCasa>yc)
						printf("NO\n");
					else
						printf("SO\n");	
				}
		  }
	}
}
