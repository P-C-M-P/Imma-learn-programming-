#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int number = 0;
    printf("how many numbers do you want? ");
    scanf("%d", &number);
    
    int *scores = calloc(number, sizeof(int)); /*so basically calloc is malloc but like it intially sets all values to zero i guess
                                                 so a malloc function may intially give you garbage values, but with calloc you intially set things to be zero first*/
    
    if(scores == NULL){
        printf("ERROR!");
    }
    
    for(int i = 0; i < number; i++){
        printf("Enter a number#%d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    
    for(int i = 0; i < number; i++){
        printf("%d ", scores[i]);
    }

    free(scores);
    scores = NULL;
}