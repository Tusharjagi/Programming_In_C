#include<stdio.h>

void PrintStr(char arr[]){
    for(int i = 0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

int main(){

    char firstname[] = "Tushar";
    char lastname[] = "jagi";
    PrintStr(firstname);
    PrintStr(lastname);



    return 0;
}