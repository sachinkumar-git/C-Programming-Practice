// all three logical operator :- && -> AND , || -> OR , ! -> NOT


// #include<stdio.h>
// #include<math.h>
// int main(){
//     printf("%d \n", !((5>1) && (3>4)));

//     return 0;
// }


#include <stdio.h>

int main() {
    int a, b;

    
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

   
    if (a > 0 && b > 0) {
        printf("Both numbers are positive\n");
    } else {
        printf("At least one number is not positive\n");
    }

   
    if (a > 0 || b > 0) {
        printf("At least one number is positive\n");
    } else {
        printf("Both numbers are not positive\n");
    }

    
    if (!(a > 0)) {
        printf("The first number is not positive\n");
    } else {
        printf("The first number is positive\n");
    }

    return 0;
}
