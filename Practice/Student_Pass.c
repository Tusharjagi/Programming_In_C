#include<stdio.h>

int main(){
    int m;
    printf("Enter the student marks : \t");
    scanf("%d",&m);

    if(m > 30){
        printf("Pass");
    }
    else{
        printf("Fail");
    }

    return 0;
}