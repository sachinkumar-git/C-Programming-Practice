#include <stdio.h>
int main()
{
    int age = 15;

    if (age > 10)
    {
        printf("we are inside if \n");
        printf("your age greater than 10 \n");
    }
    if (age % 5 == 0)
    {
        printf("we are inside another if \n");
        printf("your age divisible by 5 \n");
    }
    else
    {
        printf("not greater than 10 or not divisible by 5");
    }
    return 0;
}