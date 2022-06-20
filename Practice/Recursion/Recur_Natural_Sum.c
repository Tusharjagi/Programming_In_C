#include<stdio.h>

int sum(int n){
    // Base Case
    if(n==1){
        return 1;
    }

    int SumNum = sum(n-1);
    int sumN = SumNum +  n;
    return sumN;

}

int main(){
    printf("Sum :: %d",sum(5));

    return 0;
}