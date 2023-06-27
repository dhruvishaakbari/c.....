#include<stdio.h>

void sum(int a,int b){
	printf("sum : %d \n\n ",a+b);
}
void multi(int a,int b){
   printf("sum : %d \n\n ",a-b);
}
void divi(int a,int b){
   printf("sum : %d\ \n\n ",a*b);
}
void dhruvi(int a,int b){
	printf("sum : %d \n\n ",a/b);
}

int main(){
	
	int a,b;
	char sing;
	while (1){
	
	printf("enter first velue :");
	scanf("%d",&a);
	
    printf("enter second value :");
	scanf("%d",&b);
	
	printf("\n enter + for velue :");
	printf("enter - for velue :\n");
	printf("enter * for velue :\n");
	printf("enter / for velue :\n");
	printf("make tour selection :\n");
	scanf(" %c",&sing);
	
	switch(sing){
		
		case '+':
        sum(a,b);
		break;
		
		case '-':
			sum(a,b);
			break;
		
		case '*':
			sum(a,b);
			break;
		
		case '/':
			sum(a,b);
			break;
			
			
	}
}
	return 0;
	
}
