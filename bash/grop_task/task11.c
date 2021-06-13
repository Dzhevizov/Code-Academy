#include <stdio.h>
#include <stdlib.h>

void check_comment (char) ;  
void block_comment () ;
void single_comment () ;

FILE *fp , *fp2;

int main(int argc, char* argv[])
{
    char c;
    fp = fopen (argv[1],"r") ;  
    if (fp == NULL) {
        perror("error open input file");
        exit(1);
    }
    fp2 = fopen (argv[2],"w") ; 
    if (fp2 == NULL) {
        perror("error open output file");
        exit(2);
    }  

    while((c=fgetc(fp))!=EOF)      
        check_comment(c);   

    fclose(fp);
    fp = NULL;
    if (fp != NULL) {
        perror("error close input file");
        exit(3);
    }
    fclose(fp2);
    fp2 = NULL;
    if (fp2 != NULL) {
        perror("error close output file");
        exit(4);
    }

    return 0;
}

void block_comment()
{

 char d,e;

    while((d=fgetc(fp))!=EOF)   
    {
   
        if(d=='*')    
        {
            e=fgetc(fp);  

            if(e=='/')  
                return;
        }
   }

}

void single_comment()
{
 char d,e;

    while((d=fgetc(fp))!=EOF)  
    {
    
        if(d=='\n')   
            return;  

    }

}

void check_comment(char c)
{
    char d;

    if( c == '/')   
    {
        if((d=fgetc(fp))=='*')   
         block_comment();  

        else if( d == '/')   
        {
          single_comment();

        }
        else
        {
            
            fputc(c,fp2);
            fputc(d,fp2);
        }
    }

    else
        fputc(c,fp2);
}
