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

}