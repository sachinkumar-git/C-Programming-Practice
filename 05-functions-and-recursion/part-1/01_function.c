#include <stdio.h>

// Function Prototype
int sum(int, int);

// Function defination 
int sum(int x, int y){
    printf("The sum is %d\n", x + y);
    return x+y;
}
int main(){

    // without making variable i can directly write sum(1,2)
    // out put will be same = 3
    
    int a =1;
    int b =2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    sum(a,b);  //Function call

    int a1 =12;
    int b1 =23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    sum(a1,b1); //Function call

    int a2 =2;
    int b2 =27;

    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    
    sum(a2,b2); //Function call
    return 0;
}