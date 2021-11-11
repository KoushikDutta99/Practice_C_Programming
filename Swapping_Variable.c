#include<stdio.h>

int main(){
    int a,b;

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    (a^=b),(b^=a),(a^=b);

    printf("After Swapping: %d %d",a,b);
    printf("\n");
    
    return 0;
    
}