/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 int a = 50;
 int b = 60;
 int c;
 
 c = a;
 a = b;
 b = c;
  
  printf("A : %d\n",a);
  printf("b : %d\n",b);

    return 0;
}
