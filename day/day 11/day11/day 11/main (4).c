
#include <stdio.h>

int main()
{
   char a;
   
   printf("entre : ");
   scanf("%c",&a);
   
   switch (a) {
       
       
       case 'j':
       printf("june");
       break;
       
       case 'f':
       printf("july");
       break;
       
       default:
       printf("invelid! num");
       break;
   }

    return 0;
}
