// call by value

// #include <stdio.h>

// int sum(int, int);
// int sum(int a, int b){
//     return a+b;
// }
// int main(){
//     printf("the sum of 1 and 6 is %d", sum(1,6));
//     return 0;
// }

#include <stdio.h>

int sum(int*, int*);
int sum(int* a, int* b){
    *a =6;
    return *a+*b;
}
int main(){
    int x = 1 , y =6;
    printf("the sum of x and y is %d \n", sum(&x,&y));
    printf("The value of x is %d \n", x);
    return 0;
}