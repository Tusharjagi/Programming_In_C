#include<stdio.h>

int main(){

    int n,first=0, second=1,next;
    printf("Enter the series you want :: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++){
        printf("%d ",second);
        next = first + second;
        first = second;
        second = next ;
    }

    return 0;
}