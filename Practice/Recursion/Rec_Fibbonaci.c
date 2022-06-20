#include<stdio.h>

int fibbonaci(int n){
    // base case
    if(n == 0 || n==1){
        if(n==0){
            return 0;
        }
        if(n == 1){
            return 1;
        }
    }

    int fib = fibbonaci(n-1);
    int fibo = fibbonaci(n-2);
    int fibsum = fib + fibo;
    // printf("%d \n",fibsum);
}

int main(){

    printf("%d",fibbonaci(20));

    return 0;
}