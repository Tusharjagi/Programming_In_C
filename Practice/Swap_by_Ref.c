#include<stdio.h>

void Swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d & b = %d \n",*a,*b);
}

int main(){
    int x = 3, y = 5;
    Swap(&x,&y);
    printf("x = %d & y = %d",x,y);
    
    return 0;
}