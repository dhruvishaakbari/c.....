#include<stdio.h>

int main(){
	int arr[]={45,46,55,67,78,};
	int *b1,*b2,*b3,*b4,*b5;
	
	b1 = &arr[0];
	b2 = &arr[1];
	b3 = &arr[2];
	b4 = &arr[3];
	b5 = &arr[4];
	
	printf("%x => %d\n",b1,(*b1)*(*b1));
	printf("%x => %d\n",b2,(*b2)*(*b2));
	printf("%x => %d\n",b3,(*b3)*(*b3));
	printf("%x => %d\n",b4,(*b4)*(*b4));
	printf("%x => %d\n",b5,(*b5)*(*b5));
	
	
	return 0;
	
}
