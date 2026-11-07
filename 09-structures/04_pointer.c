#include <stdio.h>
#include <string.h>


struct student {
    int roll;
    float cgpa;
    char name[ 100];
}; 
int main(){

    struct student ece = { 1664, 9.2, "sachin"};
   

      printf("Roll No: %d\n", ece.roll);
    printf("CGPA: %.1f\n", ece.cgpa);
    printf("Name: %s\n", ece.name);

    struct student *ptr = &ece;
    printf("student roll = %d \n ",(*ptr).roll); // always use parenthesis in pointer 

    printf("student roll = %d \n ",ptr->roll); // aeeow operator
    
    return 0;
}