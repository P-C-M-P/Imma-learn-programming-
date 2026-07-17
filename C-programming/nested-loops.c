#include<stdio.h>

int main(){

    int row, columns;
    char sign;
    printf("Enter two number and a sign to make a table out of(row, column, sign): ");
    scanf("%d, %d, %c", &row, &columns, &sign);
    
 
    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            printf("%c", sign);
        }
    }

}