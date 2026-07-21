#include<stdio.h>

typedef struct{
    char model[50];
    int year;
    int price;
}Car; /*so what struct does is defining a data structure, or less fancily we're defining a data type of name Car in this case*/

int main(){

    Car cars[] = {{"AUDI", 2024, 320000},
                  {"LAMBORGHINI", 2020, 900000},
                  {"TOYOTA", 2017, 20000}}; 
                
    /*so lines 12-14, we are defining an array of data type Car, a data type which we defined in lines 3-7*/

    int number = sizeof(cars) / sizeof(cars[0]);

    for(int i = 0; i < number; i++){
        printf("%s %d %d\n", cars[i].model, cars[i].year, cars[i].price);
    }
}