
#include <stdio.h>

int main()
{
    int r,c;
    
    for(r=1;r<=5;r++){
        
        for(c=r;c<=5;c++){
            
            if(c%2==0){
                printf("1");
                
            }
            else{
                
                printf("0");
            }
        }
        printf("\n");
        
    }
    

    return 0;
}
