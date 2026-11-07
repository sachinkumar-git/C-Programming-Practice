#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Printing values before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Printing values after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
