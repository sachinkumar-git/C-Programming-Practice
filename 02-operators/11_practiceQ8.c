/*
print 1(true) or 0(False) for following statements :

a- if its sunday & its snowing → true
b- if its monday or its raining → true
c- if a no. is greater than 9 & less than 100 → true
( 2 digit no.) */


#include<stdio.h>
#include<math.h>

int main () {
    int isSunday = 0 ;
    int isSnowing = 1;

    printf("%d \n", isSunday && isSnowing);

    int isMonday = 0 ;
    int isRaining = 1;

    printf("%d \n", isMonday || isRaining);

    int x;
    printf ("enter number :");
    scanf("%d", &x);
    printf("%d \n", x>9 && x<100);
    return 0;
}