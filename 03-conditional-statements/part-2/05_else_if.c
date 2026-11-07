#include <stdio.h>
int main(){
    int age;

    printf("enter the age :");
    scanf("%d", &age);

    if (age>=65){
        printf("You can drive and you are senior citizen");
    }
    else if (age>45){
        printf("you can drive and you are elder");
    }
    else if (age>18){
        printf("you can drive");
    }
     {
        printf("you can not drive "); // if you want you can write else otherwise leave it
    }
    return 0;
}

// only one statement will run if other are correct then also single satement will run