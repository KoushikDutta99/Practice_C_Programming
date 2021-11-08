#include <stdio.h>

int main() {
	
	int n,i,m=0,flag=0;
	printf("Enter the number to check prime or not:");
	scanf("%d",&n);
	m=n/2;
	
	for(i=2;i<=m;i++){
		if(n%i==0){
			printf("\nNumber is not Prime.\n");
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("\nNumber is prime.\n");
	}
	return 0;
}