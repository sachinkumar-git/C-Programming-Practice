// // write a program to check if a no. is divisible by 2 or not

// #include<stdio.h>
// #include<math.h>

// int main () {
// //even → 1
// // odd → 0
//     int x;
//     printf("enter a number :");
//     scanf("%d", &x);

//     printf("%d", x % 2 == 0);

//     return 0;
// }



#include <stdio.h>

int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (number % 2 == 0) {
        printf("%d is an EVEN number.\n", number);
    } else {
        printf("%d is an ODD number.\n", number);
    }
    
    return 0;
}
