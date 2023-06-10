
#include <stdio.h>

int main()
{
   int i,n;
   printf("entre velue :");
   scanf("%d",&n);
   
   for(i = n; n>=1;n--){
        
      
         if(i%400 == 0){
        printf("%d\n",i);
        
        
    }
    else if(i%4 == 0){

    printf("%d\n",i);
    
    
    }
    else if(i%40 == 0){
        
        
        printf("%d\n",i);
    }
    else if(i%400 == 0){
        
       printf("%d\n",i);
       
    }
    else{
        
        
    }
        
        
        
   }

    return 0;
}
