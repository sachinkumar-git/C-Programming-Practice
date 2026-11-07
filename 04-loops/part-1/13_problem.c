// keep taking number as input from user until user enters a nummber which is multiple of 7

#include<stdio.h>
int main(){
    int n;
    do {
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if ( n%7 ==0){ //multiple of 7
            break;
        }
    }
    while (1);
    printf("thank you");


return 0;
}
