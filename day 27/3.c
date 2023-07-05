#include<stdio.h>

int main(){
	int n;
	
	printf("Enter :");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
    for(i=0;i<n;i++){
    	printf("enter :");
    	scanf("%d",&a[i]);
    	
	}
	
	int null;
	int b[n];
	int j=n-1;
	for(i=0;i<n;i++){
		
		null = a[i];
		a[i] = b[j];
		b[j] = null;
		j++;
		
	}
	for(j=0;j<n;j++){
		
		printf("%d\n",b[j]);
		
	}
	return 0;
}
