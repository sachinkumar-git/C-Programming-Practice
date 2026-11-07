// write a program to check if astudent passed or failes (marks>30) is pass (marks<=30) is fail

#include<stdio.h>
int main(){
    int marks;
    printf("enter marks (0-100) : ");
    scanf("%d", &marks);

    if (marks <= 30) {
        printf("Fail \n");
    } else if (marks > 30 && marks <= 100) {
        printf("Pass \n");
    } else {
        printf ("wrong marks");
    }

return 0;

}