#include<stdio.h>

int main(){
    char ch;
    printf("Enter the character :: \n");
    scanf("%c",&ch);

    if(ch>='0' && ch<='9'){
        printf("It's is a digit");
    }
    else{
        printf("Not a digit");
    }
}