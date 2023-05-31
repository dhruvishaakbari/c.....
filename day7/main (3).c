/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){

float fahren;
float celsius;

printf("enter of temperature in fahrenheit \n");
scanf("%f",&fahren);

celsius = 5 * (fahren - 32) /9;
 
 printf("%.2fF is equal to %.2fc\n",celsius,fahren);
 

    return 0;
}
