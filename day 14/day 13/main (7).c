
#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    int c= 1;
    
    printf("enter velue :");
    scanf("%d",&n);
    
    do{
        
       c= i * c;
     i++;
 
 
        
     
    }while(i<=n);
    
    printf("%d",c);
    return 0;
}
