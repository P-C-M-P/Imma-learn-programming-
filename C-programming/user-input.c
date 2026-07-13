#include<stdio.h>

int main(){
    int age;
    float pi;
    char symbol;
    char name[15];

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("You are %d years old!", age);

    printf("Enter pi: ");
    scanf("%f", &pi);
    
    printf("PI is equal to: %f", pi);

    printf("Enter your symbol: ");
    scanf("%c", &symbol);
    
    printf("You're favorite symbol is: %c", symbol);

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("You're name is: %s", name);


    /*
    you can't scan any data past a white space using a scanf function, since it stops scanning when it encounteres a space.

    an alternative for the scanf function, for when we want to scan a white space as well is the fgets function. This functinon can be used as shown, when scanning for a string as in the earlier example  
    */
}