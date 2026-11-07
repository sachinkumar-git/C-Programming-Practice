#include <stdio.h> 
// storing marks of 2 student of three subject 
int main(){
    int marks[2][3]; // _ _ _ | _ _ _
    marks[0][0] = 90;
    marks[0][1] = 89;
    marks[0][2] = 78;

    marks[1][0] = 90;
    marks[1][1] = 89;
    marks[1][2] = 78; 

    printf("%d %d %d %d %d %d", marks[0][0],marks[0][1],marks[0][2],marks[1][0], marks[1][1],marks[1][2] );
    
    return 0;
}