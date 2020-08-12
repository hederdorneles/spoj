#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num [1002];
    int i, impar, par;
    impar = par = 0;
    while(scanf("%s", num))
    {
    	if(strcmp(num,"0") == 0) break;
		    
        for(i = 0; i < strlen(num); i += 2)
        	par += (int)num[i] - 48;
        for(i = 1; i < strlen(num); i += 2)
            impar += (int)num[i] - 48;
			 
        if((impar - par) % 11)
		    printf("%s is not a multiple of 11.\n", num);
        else 
		    printf("%s is a multiple of 11.\n", num);
        impar = par = 0;
    }
    return 0;
}
