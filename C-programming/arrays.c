#include<stdio.h>

int main(){

    int numbers[5] = {0};
 //   printf("%d\n", numbers[0]);  // prints out 1, since 1 is located at the index of zero in the array numbers

    for(int i = 0; i < 8; i++){
        printf("%d\n", numbers[i]);
    }

    int size = sizeof(numbers)/sizeof(numbers[0]);
  
    for(int i = 0; i < size; i++){
      printf("%d ", numbers[i]);
    }

    for(int x = 0; x < 5; x++){
        printf("Enter a number for my array: ");
        scanf("%d", &numbers[x]);
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }
    
}