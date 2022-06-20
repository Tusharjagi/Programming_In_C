#include<stdio.h>

int main(){
// for
    /*
    for(int i = 0 ; i < 5; i++){
        printf("Hello world \n");
    }
    */

//    While
    /*
    int i = 0;
    while(i < 5){
        printf("Hello world \n");
        i++;
    }
    */

    int n;
    printf("Enter the number : ");
    scanf("%d",&n);

    for(int i = 0; i <= n; i++){
        printf("%d",i);
    }
    

    return 0;
}