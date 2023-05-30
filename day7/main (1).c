#include<stdio.h>

int main(){
    
    int x;
    int y;
    int c;
    
    printf("enter velue of x = \n");
    scanf("%d",&x);
    
    printf("enter velue of y = \n");
    scanf("%d",&y);
    
    c = (x*y) - (2*x*y) + (x*y);
    
    printf("ans = %d",c);
    
    return 0;
}
