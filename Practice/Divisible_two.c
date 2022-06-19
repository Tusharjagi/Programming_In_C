#include<stdio.h>

int main(){
    int n;
    printf("Enter the number :: \t");
    scanf("%d",&n);

    if(n%2==0){
        printf("This is divisible by 2.\n");
    }
    else{
        printf("Sorry not a divisible by 2.\n");
    }

    return 0;
}