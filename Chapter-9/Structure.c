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
    struct Student s2;
    struct Student s3;
    // s1.name = "Tushar";
    strcpy(s1.name, "Tushar");
    s1.roll = 23423423;
    s1.cgpa = 94.64;

    strcpy(s2.name, "Tanya");
    s2.roll = 3482389;
    s2.cgpa = 34234.23243;

    strcpy(s3.name, "Shivani");
    s3.roll = 25345345;
    s3.cgpa = 9345345.64;

    printf("Student name = %s \n",s1.name);
    printf("Student Roll No. = %d \n",s1.roll);
    printf("Student CGPA = %f \n",s1.cgpa);

    printf("Student name = %s \n",s2.name);
    printf("Student Roll No. = %d \n",s2.roll);
    printf("Student CGPA = %f \n",s2.cgpa);

    printf("Student name = %s \n",s3.name);
    printf("Student Roll No. = %d \n",s3.roll);
    printf("Student CGPA = %f \n",s3.cgpa);

    return 0;
}