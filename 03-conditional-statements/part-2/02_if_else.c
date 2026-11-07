#include <stdio.h>
int main(){
    int age;
    printf("enter age ");
    scanf("%d", &age);
    if(age>10){
        printf("we are inside if \n");
        printf("your age (%d) greater than 10 \n",age);
    }
    else {
        printf("age (%d) is not greater than 10",age);
    }
//    if code enter in if it will not enter in else
//     if code enter in else it will not enter in if
    return 0;
}