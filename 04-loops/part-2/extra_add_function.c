#include <stdio.h>

void addi(int a, int b);

int main()
{
    int x, y, res;
   
    printf("\n Enter x: ");
    scanf("%d", &x);
    printf("\n Enter y: ");
    scanf("%d", &y);
   
    addi(x, y);
   
    return 0;
}

void addi(int a, int b)
{
    int res;
    res = a+b;
    printf("\n Addition of a and b is: %d", res);
}