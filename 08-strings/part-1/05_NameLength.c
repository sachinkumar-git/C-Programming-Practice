// Make a program that inputs user's name & prints its length

#include <stdio.h>
    void printString(char arr[]);
    int countLength(char arr[]);

int main(){
    char name[100];
    // gets(str); dangerous & outdated
    fgets(name, 100, stdin);
    printf("Length is : %d", countLength(name) );
    return 0;
}
int countLength(char arr[]){
    int count =0 ;
    for (int  i = 0; arr[i] != '\0' ; i++)
    {
        count++; // count =  count + 1
    }
    return count-1; // because it counting '\0' null character 
    

}

void printString(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);

    }
    printf("\n");
}
