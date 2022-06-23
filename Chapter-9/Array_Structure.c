#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){

    struct Student ECE[100];
    ECE[0].roll = 231;
    ECE[0].cgpa = 9.32;
    strcpy(ECE[0].name, "Tushar");

    printf("Name = %s \n",ECE[0].name);
    printf("ROll = %d \n",ECE[0].roll);
    printf("CGPA = %f \n",ECE[0].cgpa);


    return 0;
}