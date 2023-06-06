

#include <stdio.h>

int main()
{
    int a,b,c,d;
    
    printf("entre:");
    scanf("%d",&a);
    
    printf("entre :");
    scanf("%d",&b);
    
    printf("entre :");
    scanf("%d",&c);
    
    printf("entre :");
    scanf("%d",&d);
    
    
    
    a>b ? a>c ? a>d ? printf("A is max :") : printf("D is max :") : c>d ? printf("C is max :") : printf("D is max : ") : b>c ? b>d ? printf("B is max : ") : printf("D is max : " ) : c>d ? printf("C is max : ") : printf(" D is max : ") ;


    return 0;
}
