// there are now two solution, and the second solution is more full-proof but it's got more jargon, well it's your pick

#include<stdio.h>

int main(){
    
    int current_largest = 0;
    int num1,num2;
    
    int gcd = 1;;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &num1,&num2);
    
    for(int i = 2; i <= num1 && i <= num2; i++){
        if((num1 % i) == 0 && (num2 % i) == 0){
            gcd = i;
        }
    }
    printf("the largest common divisor is %d", gcd);
}
/*#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int num1,num2;
    
    int gcd = 1;
    
    printf("Enter two numbers: ");
    scanf("%d%d", &num1,&num2);
    
    if(num1 == 0 || num2 == 0){
        if(num2 != 0){
            gcd = abs(num2);
            printf("the largest common divisor is %d", gcd);
            return 0;
        }
        else if(num1 != 0){
            gcd = abs(num1);
            printf("the largest common divisor is %d", gcd);
            return 0;
        }
        else{
            printf("you think you're sooo smart(you're not)");
            return 0;
        }
    }
    
    for(int i = 2; i <= abs(num1) && i <= abs(num2); i++){
        if((num1 % i) == 0 && (num2 % i) == 0){
            gcd = i;
        }
    }
    printf("the largest common divisor is %d", gcd);
}*/