#include<stdio.h>
#include<stdbool.h>

bool agecheck(int age); // declaring the prototype of the function

int main(){

    int age;
    printf("how old are you? ");
    scanf("%d", &age);
    
    if(agecheck(age)){
        printf("you are old");
    }
    else{
        printf("you are a minor");
    }

    return 0;

}

bool agecheck(int age){  // defining the function

    if(age >= 18){
        return true;
    }
    else{
        return false;
    }

}