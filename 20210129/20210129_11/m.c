#include <stdio.h>
#include <stdlib.h>
#include "f.h"

FILE *fp , *fp2;

int main(void)
{
    char c;
    fp = fopen ("original.txt","r") ;  
    fp2 = fopen ("new.txt","w") ;   

    while((c=fgetc(fp))!=EOF)      
        check_comment(c);   

    fclose(fp);
    fclose(fp2);

    return 0;
}
