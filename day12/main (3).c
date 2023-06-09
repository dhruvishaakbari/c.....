
#include <stdio.h>

int main()
{
    int i = 1;
    int n ;
    
    printf("enter velue =");
    scanf("%d",&n);
    
    while(i>=n){
        
        printf("%d\n",n);
        n++;
    }
    
    return 0;
}
