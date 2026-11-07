// print 1 to 100

// #include <stdio.h>
// int main(){
//     for (int i = 1; i <= 100; i++)
//     {
//         printf("%d\n", i);
//     }

//     return 0;
// }

// print even no. between 1 to 100

// #include <stdio.h>
// int main(){
//     for (int i = 1; i <= 100; i++)
//     {
//         if (i%2==0){  //for odd use if (i%2!=0)
//         printf("%d\n", i);

//         }
//     }

//     return 0;
// }


// to find prime number

// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("enter the number");
//     scanf("%d", &n);
//     int not_prime = 0;

//     if (n == 0 || n == 1)
//     {
//         not_prime = 1;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0 && n != 2)
//             {
//                 not_prime = 1;
//                 break;
//             }
//         }
//     }
//     if (not_prime)
//     {
//         printf("not prime number");
//     }
//     else
//     {
//         printf("a prime number");
//     }
//     return 0;
// }


// count number

// #include <stdio.h>
// int main(){
//     int count = 0,n;
//     printf("enter a number");
//     scanf("%d", &n);

//     while (n>0)
//     {
//         n = n/10;
//         count++;
//     }
//     printf("%d", count);
//     return 0;
// }


// sum  of digit 

// #include <stdio.h>
// int main(){
//     int n , ld, sum= 0;
//     printf("enter a number");
//     scanf("%d", &n);
//     while (n>0){
//         ld= n%10 ;
//         sum = sum + ld;
//         n=n/10;
//     }
//     printf("%d", sum);

//     return 0;
// }


// sum of even number

// #include <stdio.h>
// int main(){
//     int n , ld ,sum =0;
//     printf("enter a number");
//     scanf("%d", &n);
//     while (n>0)
//     {
//         ld = n%10;
//         if (ld%2 == 0){
//             sum = sum +ld;
//         }
//         n=n/10;
//     }
    
//     printf("%d", sum);

//     return 0;
// }


//  reverse of number 


// #include <stdio.h>
// int main(){
//     int r = 0,n ;
//     printf("enter a number");
//     scanf("%d", &n);

//     while (n>0)
//     {
//         r = r*10;
//         r = r + (n%10);
//         n = n/10;  

//     } 
//     printf("%d",r);
//     return 0;
// }

//  find factorial of a number

// #include <stdio.h>
// int main(){
//     int n, product = 1;
//     printf("enter a number");
//     scanf("%d", &n);
//     for (int  i = 1; i <= n ; i++)
//     {
//         product = product * i;
//     }
//     printf("%d", product);
    
//     return 0;
// }

#include <stdio.h>
int main(){
    int n, product = 1;
    printf("enter a number");
    scanf("%d", &n);
    for (int  i = 1; i <= n ; i++)
    {
        product = product * i;
    printf("%d\n", product);
    }
    
    return 0;
}