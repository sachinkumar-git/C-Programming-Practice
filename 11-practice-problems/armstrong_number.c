#include <stdio.h>
int main(){
    int n=265, arm=0, ld, c ;
    c = n;
    while (n>0)
    {
        ld = n%10;
        arm = (ld*ld*ld) + arm;
        n=n/10;
    }
    if (c==arm){printf("arm");}
    
    return 0;
}