/*Напишете макрос с един параметър, който печата
съобщение, само при дефиниран макрос DEBUG. Ако DEBUG не е
дефиниран, не печата нищо.*/

#include <stdio.h>

void DEBUGMSG(const char *msg) {
    #ifdef DEBUG
    #define DEBUGMSG(msg)  \
        { printf("DEBUG: %s\n", (msg)); }
    #else
    #define DEBUGMSG(msg)
    #endif
} 


int main(){
    DEBUGMSG("Test");
    return 0;
}
