#include<stdio.h>

typedef int num; // defined the predefined type of ints as being the same as nums
                 // basically it's like renaming the type int into nums
                 
typedef char string[300];

int main(){

    num x, y;
    
    printf("ENTER TWO NUMBERS: ");
    scanf("%d %d", &x,&y);

    
    num k = x>y? 1:2;  
    // basically says store the value of 1 into k if x is larger than y, and 2 if y is larger than x

    switch(k){
        case 1:
            printf("x is larger!\n");
            break;
        case 2:
            printf("y is larger!\n");
            break;
    }

    num l = 4;
    num m = 45;
    num n = l + m;
    
    string name = "dave";
    
    printf("%s\n", name);

    printf("%d", n);

}