#include<stdio.h>

int main(){
	
	int n,i, d=4,e;
	printf("entre velue =");
	scanf("%d",&n);
	
	int a[n];
	printf("enter velue[%d] =");
	scanf("%d",&a);
	
	for(i=0;i<n;i++){
		
		printf("enter velue[%d] =");
		scanf("%d",&i);
	}
	for(i=0;i<n;i++){
		d = d *a[i];
	}
	e = d/n;
	printf("%d",e);
	
	return 0;
}
