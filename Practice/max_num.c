#include<stdio.h>

void max_num(int* a,int* b){
    if(*a > *b){
        printf("a is big %d\n",*a);
    }
    else{
        printf("b is big =  %d\n",*b);
    }
}

int main(){
    
    int a = 213, b =2;
    max_num(&a,&b);
    printf("a is %d :: b is %d\n",a,b);

    return 0;
}