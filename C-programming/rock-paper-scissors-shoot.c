#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int getcomputerchoice();

int getuserchoice();

void compare(int userchoice, int computerchoice);

int main(){
    
    srand(time(NULL));
    
    int userchoice = getuserchoice();
    int computerchoice = getcomputerchoice();
    
    switch(userchoice){
        case 1:
            printf("You chose ROCK!\n");
            break;
        case 2:
            printf("You chose PAPER!\n");
            break;
        case 3:
            printf("You chose SCISSORS!\n");
            break;
    }
    
    switch(computerchoice){
        case 1:
            printf("Computer chose ROCK!\n");
            break;
        case 2:
            printf("Computer chose PAPER!\n");
            break;
        case 3:
            printf("Computer chose SCISSORS!\n");
            break;
    }
    
    compare(userchoice, computerchoice);
    
    return 0;
}

int getcomputerchoice(){
    
    return ((rand() % 3) + 1);
    
}

int getuserchoice(){
    
    int choice;
    
    do{
        printf("1. ROCK\n");
        printf("2. PAPER\n");
        printf("3. SCISSORS\n");
        printf("Enter a choice: ");
        scanf("%d", &choice);
    }while(choice < 1 || choice > 3);
    
    return choice;
    
}

void compare(int userchoice, int computerchoice){
    
    if(userchoice == computerchoice){
        printf("It's a tie");
    }
    else if(userchoice == 1 && computerchoice == 3){
        printf("You win!");
    }
    else if(userchoice == 2 && computerchoice == 1){
        printf("You win!");
    }
    else if(userchoice == 3 && computerchoice == 2){
        printf("You win!");
    }
    else{
        printf("YOU LOSE!!!!!!!");
    }
    
}