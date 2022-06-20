#include<stdio.h>

int main(){

    int n,mul= 1;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i = 10; i >= 0; i--){
        mul = i * n;
        printf("%d \n",mul);
    }

    return 0;
}