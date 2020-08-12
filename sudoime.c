#include <stdio.h>
#include <stdlib.h>
main()
{
   int somaL=0,somaC=0,mat[9][9],i,j;
   int n,verdadeiro=0,cont=0,soma[3][3],contSL,contSC;
   int numeroL[9],numeroC[9],auxNumero;
   int numeroMatriz1[9],numeroMatriz2[9],numeroMatriz3[9],numeroMatriz4[9],numeroMatriz5[9],numeroMatriz6[9],numeroMatriz7[9],numeroMatriz8[9],numeroMatriz9[9];
   //while(scanf("%d",&n)>0 && n)
   scanf("%d",&n);
   {
	 while((n--)>0)
	 {
		verdadeiro=1;
		contSC=0;
		memset(&soma, 0, sizeof(soma));
		for(i=0;i<9;i++)
		  scanf("%d %d %d %d %d %d %d %d %d",&mat[i][0],&mat[i][1],&mat[i][2],&mat[i][3],&mat[i][4],&mat[i][5],&mat[i][6],&mat[i][7],&mat[i][8]);
		for(i=0;i<9;i++)
		{
		  contSL=0;
		  memset(&numeroL, 0, sizeof(numeroL));
		  memset(&numeroC, 0, sizeof(numeroC));
		  somaL=0;
		  somaC=0;
		  for(j=0;j<9;j++)
		  {
			somaL+=mat[i][j];
			somaC+=mat[j][i];
			soma[contSC][contSL]+=mat[i][j];
			if(j==2||j==5)
			  contSL++;
			if(mat[i][j]<10&&mat[i][j]>0)//verifica a linha
			  numeroL[mat[i][j]-1]++;
			if (mat[j][i]<10&&mat[j][i]>0)//verifica a coluna
			  numeroC[mat[i][j]-1]++;
		  }
		  for(auxNumero=0;auxNumero<9;auxNumero++)
			if(numeroL[auxNumero]!=1||numeroC[auxNumero]!=1)
			{
			  verdadeiro=0;
			  break;
			}
		  if(i==2||i==5)
			contSC++;
		  if(somaL!=45||somaC!=45)
		  {
			verdadeiro=0;
			break;
		  }
		}
		if(verdadeiro)
		for(i=0;i<3;i++)
		  for(j=0;j<3;j++)
		  {
			if(soma[i][j]!=45)
			  verdadeiro=0;
			break;
		  }
		if(verdadeiro)
		{
		  memset(&numeroMatriz1, 0, sizeof(numeroMatriz1));
		  memset(&numeroMatriz2, 0, sizeof(numeroMatriz2));
		  memset(&numeroMatriz3, 0, sizeof(numeroMatriz3));
		  memset(&numeroMatriz4, 0, sizeof(numeroMatriz4));
		  memset(&numeroMatriz5, 0, sizeof(numeroMatriz5));
		  memset(&numeroMatriz6, 0, sizeof(numeroMatriz6));
		  memset(&numeroMatriz7, 0, sizeof(numeroMatriz7));
		  memset(&numeroMatriz8, 0, sizeof(numeroMatriz8));
		  memset(&numeroMatriz9, 0, sizeof(numeroMatriz9));
		  //primeira matriz
		  for(i=0;i<3;i++)
			for(j=0;j<3;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz1[mat[i][j]-1]++;
			  }
		  //segunda
		  for(i=0;i<3;i++)
			for(j=3;j<6;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz2[mat[i][j]-1]++;
			  }
		  //terceira
		  for(i=0;i<3;i++)
			for(j=6;j<9;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz3[mat[i][j]-1]++;
			  }
		  //quarta
		  for(i=3;i<6;i++)
			for(j=0;j<3;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
		  {
			numeroMatriz4[mat[i][j]-1]++;
		  }
		  //quinta
		  for(i=3;i<6;i++)
			for(j=3;j<6;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz5[mat[i][j]-1]++;
			  }
		  //sexta
		  for(i=3;i<6;i++)
			for(j=6;j<9;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz6[mat[i][j]-1]++;
			  }
		  //setima
		  for(i=6;i<9;i++)
			for(j=0;j<3;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz7[mat[i][j]-1]++;
			  }
		  //oitava
		  for(i=6;i<9;i++)
			for(j=3;j<6;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz8[mat[i][j]-1]++;
			  }
		  //sexta
		  for(i=6;i<9;i++)
			for(j=6;j<9;j++)
			  if (mat[i][j]<10&&mat[i][j]>0)
			  {
				numeroMatriz9[mat[i][j]-1]++;
			  }
		  //aqui verifica se ha algum numero repetido dentro de alguma matriz
		  for(auxNumero=0;auxNumero<9;auxNumero++)
			if(numeroMatriz1[auxNumero]!=1 || numeroMatriz2[auxNumero]!=1||numeroMatriz3[auxNumero]!=1 || numeroMatriz4[auxNumero]!=1 || numeroMatriz5[auxNumero]!=1|| numeroMatriz6[auxNumero]!=1 || numeroMatriz7[auxNumero]!=1 || numeroMatriz8[auxNumero]!=1 || numeroMatriz9[auxNumero]!=1)
			{
			  verdadeiro=0;
			  break;
			}
		}
		printf("Instancia %i\n",++cont);
		if(verdadeiro)
		  printf("SIM\n");
		else
		  printf("NAO\n");
		if(n!=0)
		  printf("\n"); 
	 }
	 cont=0;
   }
   return 0;
}
