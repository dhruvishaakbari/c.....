

#include <stdio.h>

int main(){

    int a,b,c,d,e;
    
    printf("entre A :");
    scanf("%d",&a);
    
    printf("entre B :");
    scanf("%d",&b);
    
    printf("entre C :");
    scanf("%d",&c);
    
    printf("entre D :");
    scanf("%d",&d);
    
    printf("entre E :");
    scanf("%d",&e);
    
     if(a>b){
         
        if(a>c){
            
            if(a>d){
                
                if(a>e){
                    
                    printf("A is max : ");
                    
                    
                }
                else{
                    
                    printf("E is max : ");
                    
                    
                }
                
            }
            else{
                if(d>e){
                    printf("D is max :" );
                }
                else{
                    
                    printf("E is max : " ) ;
                }
                
                
            }
            
        }
        else{
            if(a>c){
                printf("A is max :");
            }
            else{
                printf("C is max :");
            }
            
            

         
         
         
        }  
         
     }
     else{ 
         
         if(b>c){
             
             if(b>d){
                 
                 if(b>e){
                     
                     printf("B is max : " );

                 }
                 else{
                     
                     printf("e is max : " );
                 }
                 
             }
             else{
                 if(d>e){
                     printf("D is max : " );
                
                 }
                 else{
                     printf("E is max : " );
                 }
             }
        
         }
         else{
             if(c>d){
                  if(c>e){
             printf("C is max :");
         
                  }
                  else{
                      printf("E is max :");
                  }
                  
             }
         
            
         
         

         
         
     }
     }
       return 0;
} 

     