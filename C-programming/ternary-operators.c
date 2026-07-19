#include<stdio.h>

int main(){

    int x, y;
    
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &x,&y);

    
    int k = x>y? 1:2;  
    // basically says store the value of 1 into k if x is larger than y, and 2 if y is larger than x
    
    switch(k){
        case 1:
            printf("x is larger!");
            break;
        case 2:
            printf("y is larger!");
            break;
    }

}