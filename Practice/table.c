#include<stdio.h>

int main(){
    int n,mul=1;
    printf("Enter the natural number : ");
    scanf("%d",&n);

    for(int i = 1 ; i <= 10; i++){
        mul = i * n;
        printf("%d \n",mul);
    }


    return 0;
}