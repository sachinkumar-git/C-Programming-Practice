
#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("Test.txt", "w");

    // fprintf(fptr, "%c", 'M');
    // fprintf(fptr, "%c", 'A');
    // fprintf(fptr, "%c", 'N');
    // fprintf(fptr, "%c", 'G');
    // fprintf(fptr, "%c", 'O');
    // fclose(fptr);

// shortcut

fputc('M', fptr);
fputc('A', fptr);
fputc('N', fptr);
fputc('G', fptr);
fputc('O', fptr);

    return 0;
}
