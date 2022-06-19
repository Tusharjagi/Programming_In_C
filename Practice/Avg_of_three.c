#include<stdio.h>

int main(){
    float x, y, z,sum;

    printf("Enter the a \t");
    scanf("%f",&x);

    printf("Enter the b \t");
    scanf("%f",&y);

    printf("Enter the c \t");
    scanf("%f",&z);

    sum = (x + y + z) /3;

    printf("Average of 3 number :: %f ",sum);



    return 0;
}