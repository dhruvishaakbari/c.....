
#include<stdio.h>

int main(){
    
    int x;
    int y = 0;
    
    printf("enter num = ");
    scanf("%d",&x);
    
    if(x>y){
        
        printf("this num is positive");
        
    }
    else if(x<y){
        
        printf("this num is negetive");
    }
    else{
        
        printf("this number is nutral");
        
    }
    
    return 0;
}