#include<stdio.h>
int divi(){
	int a=0,x;
	printf("enter velue :");
	scanf("%d",&a);
	if(a%3==0 || a%5==0){
		x=a;
	}
  return x;	
}


	 
int main(){
	printf("%d",divi());
	
	return 0;
	
}
