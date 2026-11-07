//sum of digit

#include <stdio.h>
int main(){
    int sum = 0,n, ld;
    printf("enter a number");
    scanf("%d", &n);

    while (n>0)
    {
        ld = n%10;
        sum = sum + ld;
        n=n/10;
    } 
    printf("%d", sum);
    return 0;
}


// sum of even number

// #include <stdio.h>
// int main(){
//     int sum = 0,n, ld;
//     printf("enter a number");
//     scanf("%d", &n);

//     while (n>0)
//     {
//         ld = n%10;
//         if (ld%2==0){
//         sum = sum + ld;
//         }
//         n=n/10;
//     } 
//     printf("%d", sum);
//     return 0;
// }