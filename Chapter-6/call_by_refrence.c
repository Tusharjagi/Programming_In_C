#include<stdio.h>

void Square(int* n){
    *n  = *n * *n;
    printf("Square = %d \n",*n);
}

int main(){
    
    int number = 4;
    Square(&number);
    printf("number = %d \n", number);
    

    return 0;
}