

#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("entre:");
    scanf("%d",&a);
    
    printf("entre :");
    scanf("%d",&b);
    
    printf("entre :");
    scanf("%d",&c);
    
    
    a>b ? a>c ? printf("A is max :") : printf("C is max :") : b>c ? printf("B is max :") : printf("C is max");

    return 0;
}
