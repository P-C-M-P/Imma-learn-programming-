#include<stdio.h>
#include<ctype.h>

int main(){

   char questions[][300] = {"WHO ARE YOU?", 
                            "WHERE ARE YOU?", 
                            "WHY ARE YOU?"};
   char options[][67] = {"A. Dave\nB. Green\nC. Short\nD. Alexandro", 
                       "A. USA\nB. NASA\nC. AU\nD. EU",
                       "A. IDK\nB. Just is that way\nC. I think therefore i am"};

    char answers[] = {'D', 'B', 'C'};

    int QN = sizeof(questions)/ sizeof(questions[0]);
    char guess;
    int score = 0;

    for(int i = 0; i < QN; i++){
        printf("\n%s\n", questions[i]);
        printf("\n%s\n", options[i]);

        printf("Enter your guess: ");
        scanf(" %c", &guess);
        
        guess = toupper(guess);

        if(guess == answers[i]){
            printf("Exaclty!\n");
            score++;
        }
        else{
            printf("NAH!\n");
        }
    }

    printf("You got a total score of %d out of %d", score, QN);
}