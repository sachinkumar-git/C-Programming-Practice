// #include <stdio.h>
//     void printString(char arr[]);

// int main(){

//     char  firstName[] = "Sachin";
//     char lastName[] = "Kumar";

//     printString(firstName);
//     printString(lastName);
//     return 0;
// }

// void printString(char arr[]){
//     for (int i = 0; arr[i] != '\0'; i++)
//     {
//         printf("%c", arr[i]);

//     }
//     printf("\n");
// }

#include <stdio.h>
    void printString(char arr[]);

int main(){
    char firstname[50];
    printf("enter your name \n");
    scanf("%s", firstname);
    printf("your name is %s", firstname);
    return 0;
}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);

    }
    printf("\n");
}
