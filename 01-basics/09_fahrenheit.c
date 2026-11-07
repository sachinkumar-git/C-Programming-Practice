// #include <stdio.h>
// int main(){
//     float c,f;
//     printf("enter the value of celsius");
//     scanf("%f",&c);
//     f=(9.0/5.0)*c+32;
//     printf("the value of fehrenheit is %.2f", f);
//     return 0;
// }

// c to f
#include <stdio.h>
int main(){
    float f,c;
    printf("enter the value of celsius");
    scanf("%f",&f);
    c = (f-32)*5.0/9.0;
    printf("the value of fehrenheit is %.2f",c);
    return 0;
}