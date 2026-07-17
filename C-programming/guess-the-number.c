/*
THIS IS ONE WAY TO DO IT, BUT THE OTHER WAY WRITTEN BELOW IS JUST BETTER

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    
    int guess;
    int tries=1;
    int max = 100, min = 1, random;
    random = (rand() % (max - min + 1)) + min;
    
    printf("Enter your guess(1-100): ");
    scanf("%d", &guess);
    
    while(guess!=random){
        if(guess<random){
            printf("Too small!\n");
            printf("Enter a different guess: ");
            scanf("%d", &guess);
        }
        else{
            printf("Too large!\n");
            printf("Enter a different guess: ");
            scanf("%d", &guess);
        }
        tries++;
    }
    printf("That's exactly it!\n");
    printf("It took you %d tries", tries);

}*/

// THE AFOREMENTIONED BETTER WAY

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    
    int guess;
    int tries=0;
    int max = 100, min = 1, random;
    random = (rand() % (max - min + 1)) + min;
    
    do{
        printf("Enter your guess(1-100): ");
        scanf("%d", &guess);
        tries++;
        if(guess<random){
            printf("Too small!\n");
        }
        else if(guess>random){
            printf("Too large!\n");
        }
        
    }while(guess!=random);
    
    printf("That's exactly it!\n");
    printf("It took you %d tries", tries);
}
