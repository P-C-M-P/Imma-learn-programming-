#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    srand(time(NULL));
    int random;
    int min = 1, max = 3;

    random = (rand() % (max - min + 1)) + min;
    printf("Enter a choice!\n");

    printf("1. ROCK");
    printf("2. PAPER");
    printf("1. SCISSORS");

    switch()
}