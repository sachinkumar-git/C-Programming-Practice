#include <stdio.h>
int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i / j storing the addres of i 
    printf("The address of i is %p \n", &i); // address including evry thing numbers and laters
    printf("The address of i is %u \n", &i); // address including only integer
    printf("The address of i is %p \n", j);


    printf("value at address j is %d \n", *(&i));
    return 0;
}