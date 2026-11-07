// #include <stdio.h>
// int main(){
//     int n, product = 1;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     for (int  i = 1 ; i <= n ; i++)
//     {
//         product = product * i;
        
//     }
    
// printf("the factorial is : %d  ", product);
//     return 0;
// } 


//print the factorial of given no.

// #include <stdio.h>
// int main(){
//     int n, product = 1;
//     printf("enter a number : ");
//     scanf("%d", &n);

//     for (int  i = 1 ; i <= n ; i++)
//     {
//         product = product * i;
        
//         printf("the factorial of %d is : %d \n ", i,  product);
//     }
    
//     return 0;
// } 


// Function to calculate factorial using recursion

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of %d is: %d\n", n, factorial(n));

    return 0;
}
