#include<stdio.h>
#include<string.h>

// User define 
struct Student{
    char name[100];
    int roll;
    float cgpa;
};

int main(){
    struct Student s1;
    // s1.name = "Tushar";
    strcpy(s1.name, "Tushar");
    s1.roll = 23423423;
    s1.cgpa = 94.64;

    printf("Student name = %s \n",s1.name);
    printf("Student Roll No. = %d \n",s1.roll);
    printf("Student CGPA = %f \n",s1.cgpa);

    return 0;
}