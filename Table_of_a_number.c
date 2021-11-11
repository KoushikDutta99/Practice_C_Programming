#include<stdio.h>

int main(){
    int n,l,i;

    printf("Which number's table you want to print: ");
    scanf("%d",&n);
    printf("How many do you want to print: ");
    scanf("%d",&l);

    for(i=0;i<=l;i++){
        printf("%d X %d = %d \n",n,i, n*i);
    }
}