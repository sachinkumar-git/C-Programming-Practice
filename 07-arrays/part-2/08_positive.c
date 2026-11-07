#include <stdio.h>
int count(int a[],int n);
int main(){
    int a[] = { 1, 2,3,-4,5,6,-7,-8,-9,10};
    printf("the positive integr are  %d",count(a,10));
    return 0;
}

int count(int a[],int n){
    int positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i]>0){
            positive++;
        }
    }
    return positive;
}