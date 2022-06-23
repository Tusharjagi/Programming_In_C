#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr;
    ptr = (int* ) calloc(5, sizeof(int));
    ptr[0] = 3;
    ptr[1] = 1;
    ptr[2] = 7;
    ptr[3];
    ptr[4] ;

    for(int i = 0; i < 5;i++){
        printf("%d\n",ptr[i]);
    }


    return 0;
}