#include<stdio.h>

int main(){

    int start, end,i;
    printf("Enter the number start : ");
    scanf("%d",&start);

    printf("Enter the number end : ");
    scanf("%d",&end);

    if(start == 1 || start ==0){
        printf("Smallest prime number is 2. ");
    }

    for(i = start; i < end; i++){
        if(start % i == 0){
            printf("Not a prime number");
            break;
        }
    }

    if(start == i){
        printf("prime number %d",start);
    }

    return 0;
}