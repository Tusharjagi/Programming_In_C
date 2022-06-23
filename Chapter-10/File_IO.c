#include<stdio.h>

/*

    Reading from a file 

    char ch;
    fscanf(fptr,"%c",&ch);


    "r" -> read
    "rb" -> read binary
    "w" -> write
    "wb" -> write binary
    "a" -> open to append 

*/

int main(){

    FILE *fptr;
    fptr = fopen("new.txt","a");


    // if(fptr == NULL){
    //     printf("file doesn't exist \n");
    // } else {

    //     fclose(fptr);
    // }

    // int ch;
    // fscanf(fptr,"%d",&ch);
    // printf("charcter = %d \n", ch);
    // fscanf(fptr,"%d",&ch);
    // printf("charcter = %d \n", ch);
    // fscanf(fptr,"%d",&ch);
    // printf("charcter = %d \n", ch);

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);

    return 0;
}