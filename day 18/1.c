#include<stdio.h>

int main(){
	
	int n,i;
	 printf("entre size of array =");
	 scanf("%d",&n);
	 
	 int a[n];
	 for (i=0;i<n;i++){
	 	
	 	printf("enter elements =");
	 	scanf("%d",&a[i]);
	 	
	 }
	 for(i=0;i<n;i++){
	 	printf("%d\t",a[i]);
	 }	
	  return 0;
	  


}
