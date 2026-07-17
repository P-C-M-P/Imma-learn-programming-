#include<stdio.h>

int power(double num, int pow){

    int res = 1;

    for(; pow>=1; pow--){
        res = res * num;
    }
    printf("%d", res);

}

int main(){

    double x;
    int y;
    
    printf("Enter two number(the first will be raised to the second number, also add a comma between the numbers without a space tho, as in(a,b)): ");
    scanf("%lf,%d", &x,&y);

    power(x, y);

}