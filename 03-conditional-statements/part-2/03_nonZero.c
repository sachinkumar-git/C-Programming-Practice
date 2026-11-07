#include <stdio.h>
int main(){
    if (1){
        printf("this if is executed \n");
    }
    if (2345){
        printf("this if is also executed \n");
    }
    if ('c'){
        printf("this if is also executed \n");
    }
    if (2.345){
        printf("this if is also executed \n");
    }
    if (0){
        printf("this if is not executed");
    }
    return 0;
}