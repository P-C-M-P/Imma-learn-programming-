#include<stdio.h>
 
typedef enum{
    SUCCESS,FAILURE,PENDING  /*so i'll try to explain what enums be doin, so basically enums just assign nums with names constants, 
                               so like in this case since i don't manually assign the names with values, 
                               what is goin on is that it's automatically assigned 0-the number of constants we assign, 
                               so like in this case SUCCESS is assigned the value of 0
                               ********mind you the constants are assigned with capital letters*********
                               */
}Status;

void checkstatus(Status stat);

int main(){
    
    Status stat = FAILURE; /*so in this line i'm guessing we're declaring a variable with values of those described in the enum-thingy 
                             so i'm guessing basically this is equivalent to like calling a function and assigning it with one of the values described by the enum function(i guess)*/
    
    checkstatus(stat);
    
}

void checkstatus(Status stat){  /*so i'm guessing the function is saying it works on data as described by the enum function,
                                  so i'm guessing it works on constants described in the enum function*/
    switch(stat){
        case SUCCESS:
            printf("successful connection!");
            break;
        case FAILURE:
            printf("failed connection!");
            break;
        case PENDING:
            printf("connecting.........");
            break;
    }
}