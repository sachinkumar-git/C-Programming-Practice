#include <stdio.h>
#include <string.h>

int strlength(char str[]){
    int i=0;
    char c=str[i];

    while (c!='\0'){
        c = str[i];
        i++;
    }
int count = i -1;
return count;
}
int main(){
    char str[]= "SACHIN kumar";
    
    printf("%d", strlength(str));

    return 0;
}