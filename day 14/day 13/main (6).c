
#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    
    printf("enter velue :");
    scanf("%d",&n);
    
    do{
        
         
      printf("%d",n);
      printf("*");
      printf("%d",i);
      printf("=");
      printf("%d\n",n*i);
      
      i++;
        
    }while(i<=n);
    return 0;
}
