#include <stdio.h>

int main() {
	
	int n,r,sum=0,temp;
	printf("Enter the number to check palindrome or not: ");
	scanf("%d",&n);
	temp=n;
	
	while(n>0){
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	
	if(temp==sum)
	printf("\nPalindrome Number.\n");
	else
	printf("\nNot Palindrome Number.\n");
	
	return 0;
}
