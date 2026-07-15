#include<stdio.h>

int main(){

    double a,b,c;
    char oper;

    printf("enter a num: ");
    scanf("%lf", &a);
    getchar();

    printf("enter an operator(+, -, /, *): ");
    scanf("%c", &oper);

    printf("enter another number: ");
    scanf("%lf", &b);

    switch(oper){
        case '+':
            c = a + b;
            printf("the result is: %.4lf", c);
            break;
        case '-':
            c = a - b;
            printf("the result is: %.4lf", c);
            break;
        case '/':
            c = a / b;
            printf("the result is: %.4lf", c);
            break;
        case '*':
            c = a * b;
            printf("the result is: %.4lf", c);
            break;
        default:
            printf("invalid choice!");

    }

}