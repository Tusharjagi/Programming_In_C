#include<stdio.h>

int main(){

    int a = 3;
    int b = 5;
    int c ;

    printf("value of a : %d and b : %d \n",a,b );

    c = a;
    a = b;
    b = c;

    printf("value of a : %d and b : %d \n",a,b );

    
    return 0;
}