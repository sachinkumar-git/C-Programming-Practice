#include <stdio.h>
int main(){
     FILE *fptr;
    fptr = fopen("Test.txt", "r");
    char ch;
    while (ch!=EOF){
        printf("%c", ch);
        ch = fgetc(fptr);
    }
    printf("\n");

    fclose(fptr);

    return 0;
}