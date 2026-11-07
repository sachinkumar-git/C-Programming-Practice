#include<stdio.h>
int main(){
    int x, y;
    printf("enter x and y cordinate : ");
    scanf("%d, %d", &x ,&y);

    if ( x>0 && y>0) {
        printf("first quadrant");
    } else if (x<0 && y>0) {
        printf("second quadrant");
    } else if (x<0 && y<0){
        printf ("third quadrant");
    }
    else if (x>0 && y<0) {
        printf ("forth quadrant");
    }

return 0;

}