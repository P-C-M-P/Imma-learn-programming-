#include<stdio.h>

int main(){

    int age;
    int age1 = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    while(age <= 0){  // checks the condition first before proceeding with the block of code 
        printf("Please enter your real name: ");
        scanf("%d", &age);
    }
    printf("You are %d years old!", age);


    do{  // does the block of code first then enters the loop after checking the condition
        printf("Please enter your real name: ");
        scanf("%d", &age1);
    }while(age1 <= 0);

    printf("You are %d years old!", age1);

}