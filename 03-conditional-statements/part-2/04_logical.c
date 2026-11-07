#include <stdio.h>
int main(){
    int a,b;
    printf("enter a : \n");
    scanf("%d", &a);

    printf("enter b : \n");
    scanf("%d", &b);

    printf(" the value of a and b is %d \n", a&&b);
    printf("the value of a and b is %d\n", a||b);
    printf("the value of not a is %d\n", !a);

    if (a&&b){
        printf("both are true \n");
    }
// is same as writing ....
    if(a){
        if(b){
            printf("both are true");
        }
    }
    return 0;
}