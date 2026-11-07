// // // print the nth fibonacci number

// // #include <stdio.h>
// // int main(){
// //     int n;
// //     printf("enter a number : ");
// //     scanf("%d", &n);
// //     int a =1;
// //     int b = 1;
// //     int sum = 1;
// //     for (int i = 1; i<=n-2; i++){
// //         sum = a+b;
// //         a = b;
// //         b = sum;
// //     }
// //     printf("The fibonacci of %d is %d ", n , sum);

    
// //     return 0;
// // }
 

//  // print the nth fibonacci number

// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter a number : ");
//     scanf("%d", &n);
//     int a =1;
//     int b = 1;
//     int sum = 1;
//     for (int i = 1; i<=n-2; i++){
//         sum = a+b;
//         a = b;
//         b = sum;
//     printf("The fibonacci of %d is %d \n ", i , sum);
//     }

    
//     return 0;
// }
 
 #include <stdio.h>
 int main(){
    int n , a=0, b= 1, c;
    printf("enter anumber");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d",a);
        c = a+b;
        a = b;
        b =c;
    }
    
    return 0;
 }