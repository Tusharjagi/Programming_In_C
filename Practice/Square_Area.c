#include<stdio.h>

int main(){

    float h, l;

    printf("Enter the Height of the square :: \t");
    scanf("%f",&h);

    printf("Enter the length of the square :: \t");
    scanf("%f",&l);

    float sum = h * l;

    printf("Area of square :: %f",sum);

    return 0;
}