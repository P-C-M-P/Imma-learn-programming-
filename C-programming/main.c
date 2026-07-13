#include<stdio.h>
#include<math.h>

int main(){
    // data types and format specifiers
    // width specified by adding desired width between percentage sign and letter if format specifier

    int x=4;
    float y=4.56734;
    double e=2.718;
    char z= '!';
    char name[] = "NOT BROTATO";

    printf("%3d", x);

    printf("%f", y);

    printf("%lf", e);

    printf("%c", z);

    printf("%s", name);

    return 0;

}