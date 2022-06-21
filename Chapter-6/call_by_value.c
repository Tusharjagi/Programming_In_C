#include<stdio.h>

// Call by value 
void Square(int n){
    n = n * n;
    printf("Square = %d \n ",n);
}

int main(){

    int number = 4;
    Square(number);
    printf("Number is = %d\n", number );

    return 0;
}