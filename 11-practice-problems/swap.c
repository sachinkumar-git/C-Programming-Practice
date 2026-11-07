// #include <stdio.h>
// int main(){
//     int a , b, temp;
//     printf("enter a number");
//     scanf("%d",&a);
//     printf("enter b number");
//     scanf("%d",&b);

//     // temp = a;
//     // a = b;
//     // b = temp;

//     a = a +b;
//     b = a - b;
//     a = a -b;

//     printf("a is %d b is %d",a, b);
//     return 0;
// }

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