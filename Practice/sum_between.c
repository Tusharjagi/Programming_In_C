#include<stdio.h>

int main(){

    int start, end,sum = 0;
    printf("Enter the number of start : ");
    scanf("%d", &start);

    printf("Enter the number of end : ");
    scanf("%d", &end);

    for(int i = start; i <= end; i++ ){
        sum += i;
    }
    printf("%d",sum);


    return 0;
}

