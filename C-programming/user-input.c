#include<stdio.h>

int main(){
    int age;
    float pi;
    char symbol;
    char name[15];

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("You are %d years old!\n", age);

    printf("Enter pi: ");
    scanf("%f", &pi);
    
    printf("PI is equal to: %f\n", pi);

    printf("Enter your symbol: ");
    scanf(" %c", &symbol);

    printf("You're favorite symbol is: %c\n", symbol);
    
    getchar();
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("You're name is: %s\n", name);

    /*
    when scanning for a character make sure to leave some space between the openinig quotation and the % sign

    do the thing mentioned above when scanning for a character after scanning for anything else as shown above in line 20.
    */




    /*
    you can't scan any data past a white space using a scanf function, since it stops scanning when it encounteres a space.

    an alternative for the scanf function, for when we want to scan a white space as well is the fgets function.
    This functinon can be used as shown, when scanning for a string as in the earlier example  
    */



    /*
    when using the fgets function after a scanf function which ignores the \n character of input, reads the \n character before we get to scan the string input using the fgets function. 
    This can be solved using the getchar function as is shown above.
    */
}