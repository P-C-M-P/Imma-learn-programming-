#include<stdio.h>

int main(){
     
    int age;
    int DOW;

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
 
    printf("What day of the week is it(1-7)? ");
    scanf("%d", &DOW);

    switch(DOW){

        case 1:
            printf("it is monday");
            break;
        
        case 2:
            printf("it is tuesday");
            break;
        case 3:
            printf("it is wednesday");
            break;
        case 4:
            printf("it is thursday");
            break;
        case 5:
            printf("it is friday");
            break;
        case 6:
            printf("it is saturday");
            break;
        case 7:
            printf("it is sunday");
            break;
        default:
            printf("invalid choice");

    }


    return 0;

}