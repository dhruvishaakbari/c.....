#include<stdio.h>
#include<string.h>
 
struct student{

    int  stu_id;
    char stu_name;
    int  stu_age;
    char stu_cours;
    char stu_city;
    int  stu_std;
    char stu_school;
	
	
}; 

int main(){
	
	
	int n; 
	printf("enter limit :");
	scanf("%d",&n);
	
	struct student stu[n];
	
	int i;
	
	for(i=0;i<n;i++){
		
		printf("student id :");
		scanf("%d",&stu[i].stu_id);
		
		printf("student Name :");
		scanf("%s",&stu[i].stu_name);
		
		printf("student age :");
		scanf("%d",&stu[i].stu_age);
				
		printf("student cours :");
		scanf("%s",&stu[i].stu_cours);
		
		printf("student city :");
		scanf("%s",&stu[i].stu_city);
		
		printf("student std :");
		scanf("%d",&stu[i].stu_std);
		
		printf("student school :");
		scanf("%s",&stu[i].stu_school);
		
	}
	
	for(i=0;i<n;i++){
		 
		printf("%d\n",&stu[i].stu_id);
		printf("%s\n",&stu[i].stu_name);
		printf("%d\n",&stu[i].stu_age);
		printf("%s\n",&stu[i].stu_cours);
		printf("%s\n",&stu[i].stu_city);
		printf("%d\n",&stu[i].stu_std);
		printf("%s\n",&stu[i].stu_school);
	}
	
 return 0;	
	
}
