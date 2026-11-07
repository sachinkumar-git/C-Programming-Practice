#include <stdio.h>
int main () {
    int n;
    printf("enter the age");
    scanf("%d", &n);
    (n>=18)?printf("eligible for voting"):printf("not eligible for voting");


    return 0;
}