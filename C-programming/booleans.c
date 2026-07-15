#include<stdio.h>
#include<stdbool.h>

int main(){

    int health;
    bool attack;

    printf("what's your current health? "); //asks health and assigns it userinput
    scanf("%d", &health);

    if(health>=5){  // 
        printf("you can inflict damage\n");  
        printf("would you like to attack?(1(for yes) OR 0(for no)) ");
        scanf("%d", &attack);
        
        if(attack){
            printf("you have inflicted a damage of 3\n");
        }
        else{
            printf("you chose not to attack!\n");
            health+=2;
            printf("you're health went up by 2, you're current health is: %d\n", health);
        }
    }
    else{
        printf("screw you\n");
    }

}