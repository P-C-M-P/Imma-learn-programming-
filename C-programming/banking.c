#include<stdio.h>

float withdraw(float balance);
float deposit();
float checkbalance(float balance);

int main(){
    
    int choice;
    float balance=1000;
    
    do{
        printf("1. CHECK BALANCE\n");
        printf("2. WITHDRAW CASH\n");
        printf("3. DEPOSIT CASH\n");
        printf("4. Exit\n");
        printf("What do you wanna do? ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                checkbalance(balance);
                break;
            case 2:
                balance -= withdraw(balance);
                break;
            case 3:
                balance += deposit();
                break;
            case 4:
                printf("See you later!?\n");
                break;
            default:
                printf("PICK 1-4, pleaseeeee!");
        }
    }while(choice != 4);
}

float withdraw(float balance){
    
    float withdrawal;
    
    printf("How much do you wanna withdraw? ");
    scanf("%f", &withdrawal);
    
    if(withdrawal > balance){
        printf("You can't withdraw that much, please check you balance to see how much you can withdraw\n");
        return 0.0f;
    }
    else if{
        printf("You can't withdraw negative money, please enter a valid amount the next time around\n");
        return 0.0f
    }
    else{
        printf("You have withdrawn %.2f$\n", withdrawal);
        return withdrawal;

    }

}

float deposit(){
    
    float deposit;
    
    printf("How much money do you wanna deposit? ");
    scanf("%f", &deposit);
    
    if(deposit < 0.0){
        printf("Please deposit a positive amount of money!");
        return 0.0f;
    }
    else{
        printf("You have successfully deposited %.2f$ into your account!\n", deposit);
        return deposit;
    }
    
}

float checkbalance(float balance){
    
   printf("Your current balance is : %.2f$\n", balance);
    
}
