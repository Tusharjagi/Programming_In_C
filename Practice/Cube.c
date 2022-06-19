#include<stdio.h>

int main(){
    float cube,sum;
    printf("Enter the number of cube \t");
    scanf("%f",&cube);

    sum = cube * cube * cube;

    printf("CUBE of those number is %f",sum);

    return 0;
}