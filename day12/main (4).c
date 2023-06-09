
#include <stdio.h>

int main()
{
    int i =1;
    int n,sum;
    
    printf("enter velue =");
    scanf("%d",&n);
    
    while(i<=n){
        
        sum = sum +i;
        i++;
    }
    
    
    printf("sum : %d",sum);
    return 0;
}
