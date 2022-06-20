#include<stdio.h>
#include<math.h>

float Square(float num){
    return pow(num,2);
}

float rectangle(float l, float h){
    return 2 * (l + h);

}

float circle(float r){
    return 3.14 * r * r;
}

int main(){

    printf("Square :: %f \n",Square(4));
    printf("Reactangle :: %f\n",rectangle(4,5));
    printf("Circle :: %f\n",circle(5));

    return 0;
}