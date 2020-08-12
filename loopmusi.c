//LOOPMUSI
#include<stdio.h>
#include<stdlib.h>

int loop(int tamanho)
{
    int musica[tamanho];
    int picos=0;
    int i;
    int pre=0, pos=0;
    for(i=0;i<tamanho;i++)
    {
            if(i<(tamanho-1))scanf("%d ", &musica[i]);
            else scanf("%d", &musica[i]);
    }
    for(i=0;i<tamanho;i++)
    {
            pre = i-1;
            pos = i+1;
            if(pre<0)pre=tamanho-1;
            if(pos>tamanho-1)pos=0;
            
            if(((musica[i]>musica[pre])&&(musica[i]>musica[pos]))||((musica[i]<musica[pre])&&(musica[i]<musica[pos])))
            {
                                    picos++;
                                    //printf("%d.%d.%d\n",musica[pre],musica[i],musica[pos]);
            }
    }
    return picos;
}

int main()
{
    int tamanho;
    while(scanf("%d", &tamanho)>0&&tamanho>0)
    {
        printf("%d\n",loop(tamanho));
    }
    system("pause");
    return 0;
}
