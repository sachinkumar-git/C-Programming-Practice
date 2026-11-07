#include <stdio.h>
int main() {
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    if ( c >= 65 && c <= 90 )
{
printf("%c %d is upper case",c,c);
}
else if ( c >= 97 && c <= 122 )
{
    printf("%c %d is lower case",c,c);

}
else if ( c >= 48 && c <= 57 )
{
printf("%c %d is a digit",c,c);
}
else{
    printf("%c %d is a special character",c,c);
}

return 0;
}