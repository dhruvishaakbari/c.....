#include<stdio.h>

sum (int a[],int size){
	
	int c=0,i;
	
	for(i=0;i<size;i++){
		c+=a[i];
	}
	printf("sum : %d",c);
	
}
int main(){
	int n;
	 printf("enter velue : ");
	 scanf("%d",&n);
	 
	int arr[n],i;
	 
	for(i=0;i<n;i++){
	 printf("Enter velue [%d] : ",i);
 	 scanf("%d,",&arr[i]);
	 }
	 sum (arr,n);
	 
	 return 0;
}
