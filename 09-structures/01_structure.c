#include <stdio.h>
#include <string.h>

//  user defined
struct student {
    int roll;
    float cgpa;
    char name[ 100];
}; // statement terminator is very important 
int main(){
    struct student s1;

    s1.roll = 1664;
    s1.cgpa = 9.2;
    // s1.name == "rahul"; can't be used

    strcpy(s1.name, "rahul");

    printf("student name = %s \n", s1.name);
    printf("student roll no = %d \n", s1.roll);
    printf("student cgpa = %f \n",s1.cgpa);


    
    return 0;
}