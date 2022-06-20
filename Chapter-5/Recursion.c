#include<stdio.h>

void Hello(int count){
    // Base Case
    if(count == 0){
        return;
    }

    printf("Hello world \n");
    Hello(count - 1);

}

int main(){

    Hello(5);

    return 0;
}