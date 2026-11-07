// Make a program that inputs user's name & prints its length using strlen(str)

// #include <stdio.h>
// #include <string.h>

// int main(){
    // strlen(str)
    // char name[] = "sachin";
    // int length = strlen(name);
    // printf("Length is : %d \n", length );

    // strcpy(new str, old str)
    // char oldStr[] = "sachin";
    // char newStr[] = "kumar"; 

    // strcpy(newStr, oldStr);

    // puts(newStr);

    //   strcat(firstStr, secString);

    // char firstStr[100] =  "Hello"; // it add without space but when we nead space give in word only
    // char secString[] = "World";
    // strcat(firstStr, secString);
    // puts(firstStr);

    // strcmp(firstStr, secStr)

//     char ooStr[] = "Apple";
//     char secStr[] = "Banana";
//     printf("%d\n", strcmp(ooStr, secStr));
//     printf("%d", strcmp(secStr, ooStr ));

//     return 0;
// }

// take a string input from the user using %c 
 #include <stdio.h>
 int main(){
    char str[100];
    char ch;
    int i = 0;

    while (ch != '\n'){
        scanf("%c", &ch);
        str[i] = ch;
        i++;
    } 
    str [i] = '\0';
    puts(str);
    return 0;
 }

