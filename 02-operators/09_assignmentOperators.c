#include <stdio.h>
int main()
{
    int a = 6, b;
    b = a;      
    printf("b = %d\n", b);
    b += a;    // Equivalent to b = b + a
    printf("b = %d\n", b);
    b -= a; // Equivalent to b = b - a
   printf("b = %d\n", b);
    b *= a;  // Equivalent to b = b * a
    printf("b = %d\n", b);
    b /= a;  // Equivalent to b = b / a
    printf("b = %d\n", b);
    b %= a; // Equivalent to b = b % a
   printf("b = %d\n", b);
    return 0;
}