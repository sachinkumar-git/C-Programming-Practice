// swap using third variable

// #include <stdio.h>
// int main(){
//     int a, b, temp;
//     printf("enter two number a & b ");
//     scanf("%d %d",&a,&b);

//     temp = a;
//     a = b;
//     b = temp;

//     printf("a is %d and b is %d", a, b);
//     return 0;
// }


// swap without using third variable

#include <stdio.h>
int main(){
    int a, b, temp;
    printf("enter two number a & b ");
    scanf("%d %d",&a,&b);

    a = a +b;
    b = a-b;
    a = a-b;

    printf("a is %d and b is %d", a, b);
    return 0;
}