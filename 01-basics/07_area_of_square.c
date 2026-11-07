// write a program to calculate area of a square (side is given)

#include<stdio.h>

int main (){
    int side;
    printf("enter side");
    scanf("%d", &side);

    int area = side * side;
    printf("ares of square is : %d", area);
    return 0;
  
}


/* alternative code for any calculation (shortcut)

    printf("area is : %d", side * side);
    
    */  