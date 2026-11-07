#include <stdio.h>

void namste();
void bonjour();

int main(){
    printf("enter f for french and i for india : ");
    char ch ;
    scanf("%c", &ch);
    if (ch== 'i'){
        namste();
    }else{
        bonjour();
    }
    return 0;
}

void namste(){
    printf("Namaste");
}

void bonjour(){
    printf("Bonjour");
}