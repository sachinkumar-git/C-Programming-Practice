#include <stdio.h>

int main(){
    int n;
    printf("Enter the number");
    scanf("%d", &n);
    int sum=0;

    for (int i = 1; i <= 10; i++)
    {
        // sum += (n*i);  
        sum = sum + (n*i);
    }
    printf("The sum of the table of %d is %d",n, sum);
    return 0;
}