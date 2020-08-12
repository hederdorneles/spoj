#include <stdio.h>

int main()
{
    int mat[1000];
    register i;
    int box, pilha, j, posicao, npilha, esq, dir;
    while(scanf("%d %d", &box, &pilha) && box)
    {
        //memset(mat,0,sizeof(mat));
        for(i = 0; i < pilha; i++) {
            scanf("%d", &mat[i]);
            for(j = 0; j < mat[i]; j++) {
                scanf("%d", &box);
                if (box == 1)
                {
                    posicao = j+1;
                    npilha = i;
                }
            } // for
        } // for
        j = box = mat[npilha] - posicao;
        for (i = npilha-1; i >= 0 ; i--)
        {
            if (mat[i] >= posicao)
                box += mat[i] - posicao+1;
            else break;
        }
        for (i = npilha+1; i < pilha ; i++)
        {
            if (mat[i] >= posicao)
                j += mat[i] - posicao+1;
            else break;
        }
        
        if (box > j)
            printf("%d\n", j);
        else
            printf("%d\n", box);
    }
    
    return(0);
}
