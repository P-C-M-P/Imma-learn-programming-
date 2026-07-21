#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int number = 0;
    printf("how many numbers do you want to enter? ");
    scanf("%d", &number);
    
    char *pGrades = malloc(number * sizeof(char));  /*so the malloc function is a function that allocates a given amount of memory dynamically
                                                      basically, that just means that, given a situation where i don't know the amount of memory i need,
                                                      then i use the malloc function, inorder to set away a certian amount of memory for when i need it.
                                                      well, in this case what's going on, is that in this case, we ask the user for the amount of numbers they want to store,
                                                      and then the malloc allocates a certain amount of memory according to our user's needs.*/
    
    if(pGrades == NULL){
        printf("memory allocation failed!");
    }
    
    for(int i = 0; i < number; i++){
        printf("enter number#%d: ", i+1);
        scanf(" %c", &pGrades[i]);
    }
    
    for(int i = 0; i < number; i++){
        printf("The %dst number is: %c\n", i+1, pGrades[i]);
    }
    
    free(pGrades); // this just says free the data allocated at that address(or in other words, just free the space), after we're done using the memory
    pGrades = NULL; // this just says vacate the values stored at that address(or set it to null, i guess)(this is a genuine guess and i'm not sure so please read more)
}