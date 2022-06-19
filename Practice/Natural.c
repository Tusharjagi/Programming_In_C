#include<stdio.h>

int main(){
    int n;
    printf("Print any Number : ");
    scanf("%d",&n);

    if(n >= 0){
        printf("It's natural number. ");
    }
    else{
        printf("not natural number. ");
        
    }

    return 0;
}