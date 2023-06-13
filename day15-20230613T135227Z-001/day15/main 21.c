

#include <stdio.h>

int main(){
    
    
int r,c;
char k='A'; 

for(r=1;r<=5;r++){
    
    for(c=r;c>=1;c--){
        
       printf("%c",k); 
       k++;
    }
    printf("\n");
}


    return 0;
}
