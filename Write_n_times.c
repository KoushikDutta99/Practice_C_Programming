#include<stdio.h>

int main(){
    int n;
    printf("Enter how many times you want to print the word: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        printf("\nHello World");
    }
    
    return 0;
    
}