#include<stdio.h>

void swap(int *d1,int *d2){
	
	int d3;
	
	d3 = *d1;
	*d1 = *d2;
	*d2 = d3;
	
	printf("A : %d\n",*d1);
	printf("B : %d\n",*d2);	
}
int main(){
	
	int a,b;
	
	printf("enter velue of A :");
	scanf("%d",&a);
	
	printf("enter velue of B :");
	scanf("%d",&b);
	
	swap(&a,&b);
	
	return 0;
}
