#include<stdio.h>

//ARRAYS ARE FIXED COLLECTIONS OF DATA, KIND OF LIKE VARIABLES BUT THEY CAN STORE MORE THAN A SINGLE VALUE

int main(){

    int numbers[] = {1, 2, 3, 5, 7, 9, 7346634, 890, 68, 342,345345};
 //   printf("%d\n", numbers[0]);  // prints out 1, since 1 is located at the index of zero in the array numbers
/*
    for(int i = 0; i < 8; i++){
        printf("%d\n", numbers[i]);
    }
*/
  int size = sizeof(numbers)/sizeof(numbers[0]); // computes the number of elements in an array by using the formula
                                                // the sizeof function equates how many bytes are allocated to the data type. 
                                               // the formula is then just evaluating the number of elements in the array by dividing the total bytes allocated to the bytes allocated to a single element
  for(int i = 0; i < size; i++){                                             
      printf("%d ", numbers[i]);
  }

}