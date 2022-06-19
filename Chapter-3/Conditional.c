#include<stdio.h>

int main(){

    /*
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    if(age >= 18){
        printf("adult \n");
       
    }
    else if(age > 13 && age < 18){
        printf("Teenager \n");
    }
    else{
        printf("Child \n");
    }
    */

//    Ternary

    /*
    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    age >= 18 ? printf("adult \n ") : printf("not adult \n");
    */

//    Switch

    int day;
    printf("Enter day : \t");
    scanf("%d",&day);

    switch(day){
        case 1: printf("Monday");
            break;
        case 2: printf("Tuesday");
            break;
        case 3: printf("Wednessday");
            break;
        case 4: printf("Thurday");
            break;
        case 5: printf("Friday");
            break;
        case 6: printf("Saturday");
            break;
        case 7: printf("Sunday");
            break;
    }




    return 0;
}