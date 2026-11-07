#include <stdio.h>

int main(){
    int a = 4; 
    printf("%d %d %d \n", a, ++a, a++);
    
    // 6 6 4 - if the evalution order of compiler is right to left this is correct
    // 4 5 5 - if the evalution order of compiler is left to right this is correct

    // basically  both  the answer are correct it totaly depends on the compiler is it correct or not 
    return 0;
}