#include<stdio.h>

int main(){

    int n,i; 
    printf("Enter any number : ");
    scanf("%d",&n);

    if(n == 0 || n == 1){
        printf("Smallest prime number is 2. ");
    }

    for(i = 2; i < n; i++){
        if(n%i == 0){
            printf("Not a prime number . ");
            break;
        }
    }

    if(n == i){
        printf("Prime number. ");
    }

    return 0;
}