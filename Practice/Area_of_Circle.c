#include<stdio.h>

int main(){
    float radius;
    printf("Enter the radius of cicle :: \t");
    scanf("%f",&radius);

    float area = 3.14 * radius * radius;

    printf("Area of circle %f",area);


    return 0;
}