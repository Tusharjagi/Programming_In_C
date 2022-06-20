#include<stdio.h>

int factorial(int n){
    // Base Case
    if(n == 1){
        return 1;
    }

    int fact = factorial(n-1);
    int factNum = fact * n;
    return factNum; 

}

int main(){
    printf("%d",factorial(6));


    return 0;
}