/*Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/

#include <stdio.h>
#include <string.h>

int main(){
    char sentence[] = "I am a poor programmer";
    const char *from = "poor";
    const char *to = "great";

    char *pos = strstr(sentence, from);  /*пойнтер към думата, която искаме да заменим в дадения стринг*/

    if (pos != NULL)
    {
        size_t newlen = strlen(sentence) - strlen(from) + strlen(to);  /*дължина на новия стринг*/
        char new_sentence[newlen + 1];

        memcpy(new_sentence, sentence, pos - sentence); /*копира частта от дадения стринг преди замяната*/

        memcpy(new_sentence + (pos - sentence), to, strlen(to)); /*копира новата дума*/

        strcpy(new_sentence + (pos - sentence) + strlen(to), pos + strlen(from)); /*копира останалата част*/

        printf("Old: %s\n", sentence);
        printf("New: %s\n", new_sentence);
        return 0;
    }
}
