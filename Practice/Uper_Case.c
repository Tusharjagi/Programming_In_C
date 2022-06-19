#include<stdio.h>

int main(){
    char c;
    printf("Enter the character : ");
    scanf("%c",&c);

    if(c >= 'A' && c <= 'Z'){
        printf("Upper Case ");
    }
    else if(c >= 'a' && c <= 'z'){
        printf("Lower Case");
    }
    else{
        printf("Invalid character");
    }

    return 0;
}