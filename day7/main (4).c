/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

int a = 300;
int b = 500;

a = a+b;
b = a-b;
a = a-b;

printf("A = %d\n",a);
printf("B = %d\n",b);

    return 0;
}
