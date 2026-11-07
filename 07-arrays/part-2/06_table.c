// #include <stdio.h>
// int main(){
//     int arr[10];

//     for (int i = 0; i < 10; i++)
//     {
//         arr[i]= 5 * (i+1);
//     }
//     for (int  i = 0; i < 10; i++)
//     {
//         printf("the value of 5 x %d = %d \n", i+1, arr[i]);
//     }
    
//     return 0;
// }

//  table input from user

#include <stdio.h>
int main(){
    int sac[10];
    int n;
    printf("enter a number");
    scanf("%d", &n);

    for (int  i = 0; i < 10; i++)
    {
        sac[i]= n * (i+1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("the value of %d x %d = %d\n", n , i+1 , sac[i]);
    }
    
    
    return 0;
}