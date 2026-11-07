#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    float cgpa;
    char name[ 100];
}; 
void printInfo(struct student ece);
int main(){

    struct student ece = { 1664, 9.2, "sachin"};
    printInfo(ece);
    //   printf("Roll No: %d\n", ece.roll);

    return 0;
}
void printInfo(struct student ece){
    printf("student information : \n");
      printf("Roll No: %d\n", ece.roll);
    printf("CGPA: %.1f\n", ece.cgpa);
    printf("Name: %s\n", ece.name);
    
}
