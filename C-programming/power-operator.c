#include<stdio.h>

int power(double num, int pow){

    int res = 1, num;

    for(; pow>=2; pow--){
        res = res * num;
        pow = pow -1;
    }
    return res;

}

int main(){

    double x = 4.0;
    int y = 3;

    power(x, y);

}