#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int number = 0;
    printf("how many numbers do you want to enter? ");
    scanf("%d", &number);
    
    float *pGrades = malloc(number * sizeof(float));  
    if(pGrades == NULL){
        printf("memory allocation failed!");
        return 1;
    }
    
    for(int i = 0; i < number; i++){
        printf("enter number#%d: ", i+1);
        scanf(" %c", &pGrades[i]);
    }

    int new = 0;
    printf("Enter a new number: ");
    scanf("%d", &new);

    float *temp = realloc(pGrades, new * sizeof(float));
    
    if(temp == NULL){
        printf("ERROR REALLOCATING MEMORY!");
    }
    else{

        pGrades = temp;
        temp = NULL;

        for(int i = number; i < new; i++){
        printf("enter number#%d: ", i+1);
        scanf(" %c", &pGrades[i]);
        }
            
        for(int i = 0; i < new; i++){
        printf("The %dst number is: %d\n", i+1, pGrades[i]);
        }
    }

    free(pGrades); 
    pGrades = NULL; 
    
}