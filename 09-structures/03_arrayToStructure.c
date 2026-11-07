#include <stdio.h>
#include <string.h>

struct student {  // Corrected struct name
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    // struct student ece[100];  // Corrected variable name to match struct
    // ece[0].roll = 1664;
    // ece[0].cgpa = 9.2;
    // strcpy(ece[0].name, "sachin");


// shortcut initializing
    struct student ece = { 1664, 9.2, "sachin"};

    printf("Roll No: %d\n", ece.roll);
    printf("CGPA: %.1f\n", ece.cgpa);
    printf("Name: %s\n", ece.name);

    return 0;
}
