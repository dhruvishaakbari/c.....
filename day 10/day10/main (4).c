

#include <stdio.h>

int main()
{
    int a,b,c,d,e;
    
    printf("entre:");
    scanf("%d",&a);
    
    printf("entre :");
    scanf("%d",&b);
    
    printf("entre :");
    scanf("%d",&c);
    
    printf("entre :");
    scanf("%d",&d);
    
    printf("entre :");
    scanf("%d",&e);
    

    a>b ? a>c ? a>d ? a>e ? printf("A is max :") : printf("E is max :") : d>e ? printf("D is max : "): printf("E is max : "): c>d ? c>e ? printf("C is max : "):printf("E iscv max : ") :d>e ? printf("D is max : "): printf("E is max :"):  b>c ? b>d ? b>e ? printf("B is max :"): printf("E is max : "): d>e ? printf("D is max :"): printf("E is max : "): c>d ? c>e ? printf("C is max : "): printf("E is max : ") : d>e ? printf("D is max : ") : printf("E is max : ");



    return 0;
}
