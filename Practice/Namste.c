#include<stdio.h>

void India(char ch){
    if(ch == 'i'){
        printf("You are indian");
    }
    else if(ch == 'f'){
        printf("You are french");
    }
    else{
        printf("You are alien");
    }
}

int main(){
    char ch;
    printf("Enter character : ");
    scanf("%c",&ch);

    India(ch);

    return 0;
}