#include <stdio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");

    // char ch;
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);
    // fscanf(fptr, "%c", &ch);
    // printf("character = %c\n", ch);


// shortcut

printf("%c\n", fgetc(fptr));
printf("%c\n", fgetc(fptr));
printf("%c\n", fgetc(fptr));
printf("%c\n", fgetc(fptr));
printf("%c\n", fgetc(fptr));

    fclose(fptr);
    return 0;
}
