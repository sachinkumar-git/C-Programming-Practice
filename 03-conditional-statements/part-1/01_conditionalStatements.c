#include<stdio.h>
int main(){
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if (age>18) {
        printf("adult \n");                // combination of statement b/w curly bracket is called BLOCK
        printf("they can vote \n");        // without curly bracket we can not write more than one statement in if
        printf("they can drive\n");
    }

    else {
        printf("not adult \n");
    }

printf("THANK YOU"); // EVERY time it will print
return 0;
    
}