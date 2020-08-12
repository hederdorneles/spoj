#include <stdio.h>
#define TAM 1001
#define  QUANT 31
main()
{
  int matriz[QUANT][TAM],conjunto[QUANT];//={3,2,4},cont=3,numero=7;
  int caso = 1, flag = 0, cont, numero;
  register i, j;
  while(scanf("%d ", &cont) > 0 && (cont > 1) && (cont < 31))
  {
    memset(matriz,0,sizeof(matriz));
    printf("Case #%d:", caso++);
        for(i=0;i<=cont;i++) //0<=i<=3
          matriz[i][0]=1;
    for (i = 0; i < cont; i++)
    {
      scanf("%d", &conjunto[i]);
      printf(" %d", conjunto[i]);
      if (i > 0)
        if (conjunto[i-1] >= conjunto[i])
          flag = 1;
    }
    numero=conjunto[i-1];
    if (!flag)
    {
        for(i=1;i<=cont;i++)
        {
          for(j=1;j<=numero;j++)
          if(matriz[i-1][j]==1)
              matriz[i][j]=1;
          else
          if(j-conjunto[i-1]>=0)
          {
            if(matriz[i-1][j-conjunto[i-1]]==1)
              matriz[i][j]=1;
          }
        }
        for(i=1;i<=cont;i++)
        {
          if(matriz[i-1][conjunto[i-1]] == 1)
            flag = 1;
        }
    }
    
    
    printf("\n");
    if (flag)
      printf("This is not an A-sequence.\n");
    else
      printf("This is an A-sequence.\n");
    flag = 0;
      /*  for (i = 0;i<=cont;i++)
        {
          for(j = 0; j <= numero;j++)
          {
            printf("%i\t",matriz[i][j]);
          }
          puts("");
        }*/
  }
  return 0;
}
