#include<stdio.h>
int main(){

	int n,i;
	int largest,second;
	printf("Enter size of array:");
	scanf("%d",&n);

	int a[n];
	for(i=0;i<n;i++){
		printf("Enter elements of array[%d]:",i);
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);#include<stdio.h>
int main(){

	int n,i;
	int largest,second;
	printf("Enter size of array:");
	scanf("%d",&n);

	int a[n];
	for(i=0;i<n;i++){
		printf("Enter elements of array[%d]:",i);
		scanf("%d",&a[i]);

	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	if(a[0]>a[1]){
		largest=a[0];
		second=a[1];

	}else{
		largest=a[1];
		second=a[0];
	}
	for(i=0;i<n;i++){
		if(largest<a[i]){
			second=largest;
			largest=a[i];
					} else if(second<a[i]){
						second=a[i];
					}
	}
	printf("largest - %d\nsecond -  %d\n",largest,second);

	return 0;
}
 29 changes: 29 additions & 0 deletions29  
pr.assortment/pro.3.c
@@ -0,0 +1,29 @@
#include<stdio.h>

int main(){

	int a[]={1,2,3,4,5};
	int length=sizeof(a)/sizeof(a[0]);
	int n=3,i;

	printf("Original array:\n");
	for(i=0;i<length;i++){
		printf("%d ",a[i]);

	}
	for(i=0;i<n;i++){
		int j,last;
		last=a[length-1];

	for(j=length-1;j>0;j--){
		a[j]=a
	}
	if(a[0]>a[1]){
		largest=a[0];
		second=a[1];

	}else{
		largest=a[1];
		second=a[0];
	}
	for(i=0;i<n;i++){
		if(largest<a[i]){
			second=largest;
			largest=a[i];
					} else if(second<a[i]){
						second=a[i];
					}
	}
	printf("largest - %d\nsecond -  %d\n",largest,second);

	return 0;
}

