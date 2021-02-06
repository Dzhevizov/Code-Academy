/*Напишете функцията strend(s, t), която връща 1, ако низът t
се среща в края на низа s и 0 ако това не е изпълнено.*/

#include <stdio.h>
#include <string.h>

int strend(char *s, char *t) 
{
   int  i = 0,flag=0,j=0;
   i = strlen(s) - strlen(t);
   while(j<strlen(t)) 
   {

       if (*(s+i) == *(t+j))
       {
          flag = 1;
          j++;
          i++;
          continue;
       }
       else
       {
          flag = 0;
          break;
       }
    }

    return flag;
}

int main(void) 
{
    char s[] = "Hello world";
    char t[] = "world";
    int flag = strend(s,t);
    printf("%d\n", flag);
    return 0;
}
