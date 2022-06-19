#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the number a : \t");
    scanf("%d",&a);

    printf("Enter the number b : \t");
    scanf("%d",&b);

    if(a < b){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }

    return 0;
}