#include<stdio.h>
int main(){
	int num1,num2,product=0;
	printf("Enter 1st number:");
	scanf("%d",&num1);
    printf("Enter 2nd number:");
	scanf("%d",&num2);
	
    while(num2>0){
		product=product+num1;
		num2--;
	}
	printf("The product is :%d",product);
	return 0;
}