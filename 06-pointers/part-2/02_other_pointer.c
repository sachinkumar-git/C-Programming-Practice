#include <stdio.h>
int main(){
    char i = 'A';
    char* j = &i;
    printf("The address of i is %p \n", &i); // address including evry thing numbers and laters
    printf("The address of i is %u \n", &i); // address including only integer
    printf("The address of i is %p \n", j);


    printf("value at address j is %d \n", *(&i));
    return 0;
}