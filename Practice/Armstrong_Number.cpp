#include<stdio.h>

int main(){
    int n,rem,arm=0;
    printf("Enter the number : \n");
    scanf("%d",&n);
    int temp = n;

    while(n!=0){
        rem = n % 10;
        arm += rem * rem * rem;
        n/=10;
    }

    if(arm == temp){
        printf("It's a Armstrong number ");
    }
    else{
        printf("Not a Armstrong Number ");
    }


    return 0;
}