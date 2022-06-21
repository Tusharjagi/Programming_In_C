#include<stdio.h>

int main(){

    int arr[] = {12,35,63,87,23};
    int size = 5;
    for(int i = size-1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
    
    return 0;
}