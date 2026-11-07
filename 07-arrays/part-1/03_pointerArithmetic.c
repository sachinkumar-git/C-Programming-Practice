#include <stdio.h>

// only increment and decrement can be done not divide multiply or modulas
int main(){
    // int 

    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);

    // float

    // float price = 100.00;
    // float *ptr1 = &price;
    // printf("ptr = %u\n", ptr1);
    // ptr1++;
    // printf("ptr = %u\n", ptr1);

    // char

    // char star = '*';
    // char *ptr = &star;
    // printf("ptr = %u\n", ptr);
    // ptr++;
    // printf("ptr = %u\n", ptr);
    // ptr--;
    // printf("ptr = %u\n", ptr);

    int age = 22;
    int _age = 23;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("%u, %u difference = %u \n", ptr , _ptr , ptr-_ptr);
    _ptr = &age;
    printf("comparison = %u\n", ptr == _ptr);



    return 0;
}