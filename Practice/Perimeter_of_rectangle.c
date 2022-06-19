#include<stdio.h>

int main(){
    float l, w, area;
    printf("Enter length of reactangle :: \t");
    scanf("%f",&l);

    printf("Enter widht of reactangle :: \t");
    scanf("%f",&w);

    area = 2 * (l + w);

    printf("Area of reactangel :: %f",area);    

    return 0;
}