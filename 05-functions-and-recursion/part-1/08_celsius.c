#include <stdio.h>

float c_to_f(float);

float c_to_f(float c){
    return((9*c)/5) + 32;
}
int main(){
    float c = 45;
    printf("Celsius to fahrenheit for %.2f is %.2f", c , c_to_f(c));
    return 0;
}