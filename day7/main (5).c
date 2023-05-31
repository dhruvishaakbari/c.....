/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

int b_s , hra , da , ta ,g_s;

printf("entre salary =");
scanf("%d",&b_s);

hra = (10.00/100)*b_s;

da = (5.00/100)*b_s;

ta =( 8.00/100)*b_s;

g_s = hra*da*ta;

printf("enter g_s = %d",g_s);
    return 0;
}
