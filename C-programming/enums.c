#include<stdio.h>

typedef enum{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
}day;

int main(){
    
    day today = MONDAY;
    if(today == SUNDAY || today == SATURDAY){
        printf("It's a weekday?!");
    }
    else{
        printf("It's a weekend?!");
    }
    
}