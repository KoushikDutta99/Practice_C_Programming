#include <stdio.h>

int main() {
	
	int n,r,sum=0,temp;
	printf("Enter the number if it's armstrong number or not: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	printf("\nArmstrong number.\n");
	else
	printf("\nNot an armstrong number.\n");
	
	return 0;
}
