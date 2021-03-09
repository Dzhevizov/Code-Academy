/*Напишете програма, която да намери общия брой на
редовете в текстови файл.
Създайте файл, който съдържа няколко реда текст.
Внимавайте къде позиционирате файла.
Отворете файла. Използвайте променлива, която да
брои броя на редовете.*/

#include <stdio.h>

int main(){
    FILE *fp;

    fp = fopen("file.txt", "w+");
    fputs("Ivancho and Mariika\n", fp);
    fputs("are going to Varna\n", fp);
    fputs("every summer\n", fp);
    fputs("with their children\n", fp);
    fputs("for their holiday\n", fp);

    rewind(fp);
    int count = 0;
    char c = 0;
    
    while ((c = fgetc(fp)) != EOF){
        if (c == '\n'){
            count++;
        }
    }
    printf("Count of new lines in the file is: %d\n", count);

    fclose(fp);

    return (0);
}
