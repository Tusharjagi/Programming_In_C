#include<stdio.h>

int main(){

    int m;
    printf("Enter the marks of student : \n");
    scanf("%d",&m);

    if(m < 30){
        printf("C\n");
    }
    else if(m >= 30 && m < 70){
        printf("B\n");
    }
    else if(m > 70 && m < 90)
    {
        printf("A\n");
    }
    else if(m > 90 && m < 100){
        printf("A+\n");
    }

    return 0;
}