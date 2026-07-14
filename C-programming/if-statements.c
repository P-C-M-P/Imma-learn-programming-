#include<stdio.h>

int main(){
     
    int age;

    printf("How old are you? ");
    scanf("%d", &age);

    if(age >= 18){

        printf("You are of age!\n");
        printf("You're allowed to drink alcohol.\n");

    }
    else{

        printf("You are underage!\n");
        printf("You're not allowed to drink.\n");

    }

    return 0;

}