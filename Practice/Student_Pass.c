#include<stdio.h>

int main(){
    int m;
    printf("Enter the student marks : \t");
    scanf("%d",&m);

    if(m >= 0 && m <= 30){
        printf("Fail");
    }
    else if(m >= 30 && m <= 100){
        printf("pass");
    }
    else{
        printf("Wrong marks");
    }

    return 0;
}