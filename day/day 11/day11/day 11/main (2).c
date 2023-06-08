
#include <stdio.h>

int main()
{
  
        
      int a,b;
      
      printf("enter velue here =");
      scanf("%d",&a);
      
      b = a%2;
      
      switch(b){
          
          case 1:
          printf("enter your input value is even ");
          break;
          
          case 2:
          printf("enter youe velue is odd ");
          break;
          
          
          default : 
          printf("invelid input !");
      }
    return 0;
}
