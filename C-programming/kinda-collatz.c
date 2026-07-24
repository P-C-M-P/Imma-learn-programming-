#include<stdio.h>

int main(){
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int count = 0;
    
    do{
        if((num % 2) == 0){
            num = num / 2;
            printf("%d\n", num);
            count++;
        } 
        else{
            if(num == 1){
                printf("You've reached one!");
            }
            else{
                num = (3*num) + 1;
                printf("%d\n", num);
                count++;
            }
        }
    }while(num != 1);
    printf("\nIt took %d number of steps!!\n", count);
}