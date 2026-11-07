#include<stdio.h>
int main(){
    double tax=0 , income ;
    printf("enter the amount : ");
    scanf("%f", &income);

    if (income<=10000) {
        tax=0;
    }
    else if ( income>=10001 && income<=30000) {
        tax = 0.1 * income;
    }
    else if ( income>=30001 && income<=50000) {
        tax = 0.2 * income;
    }
    else if ( income>50000) {
        tax = 0.3*income;
    }

    printf("tax on annual income is %lf \n", tax);

return 0;

}