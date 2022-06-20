#include<stdio.h>

float percentage(float math, float science, float sanskrit){
    float mark = ((math + science + sanskrit)/3) ;
    return mark;
}

int main(){

    printf("Percentage :: %f",percentage(98,95,99));


    return 0;
}