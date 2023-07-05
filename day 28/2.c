#include<stdio.h>
#include<string.h>
 
struct employee{

    int  emp_id;
    char emp_name[20];
    int  emp_age;
    char emp_roll[20];
    char emp_city[20];
    int  emp_experienc[20];
    char emp_company_name[20];
	
	
}; 

int main(){
	
	
	int n; 
	printf("enter limit :");
	scanf("%d",&n);
	
	struct employee emp[n];
	
	int i;
	
	for(i=0;i<n;i++){
		
		printf("student id :");
		scanf("%d",&emp[i].emp_id);
		
		printf("student Name :");
		scanf("%s",&emp[i].emp_name);
		
		printf("student age :");
		scanf("%d",&emp[i].emp_age);
				
		printf("student roll :");
		scanf("%s",&emp[i].emp_roll);
		
		printf("student city :");
		scanf("%s",&emp[i].emp_city);
		
		printf("student   experienc:");
		scanf("%d",&emp[i].emp_experienc);
		
		printf("student company name:");
		scanf("%s",&emp[i].emp_company_name);
		
	}
	
	for(i=0;i<n;i++){
		 
		printf("%d\n",&emp[i].emp_id);
		printf("%s\n",&emp[i].emp_name);
		printf("%d\n",&emp[i].emp_age);
		printf("%s\n",&emp[i].emp_roll);
		printf("%s\n",&emp[i].emp_city);
		printf("%d\n",&emp[i].emp_experienc);
		printf("%s\n",&emp[i].emp_company_name);
	}
	
 return 0;	
	
}
