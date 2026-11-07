#include <stdio.h>
int main()
{
    int a = 6, b;
    b = a;      
    b %= a; // Equivalent to b = b % a
   printf("b = %d\n", b);
    return 0;
}