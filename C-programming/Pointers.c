#include<stdio.h>

int birthday(int* age);

int main(){

    int age = 20;
    int *pAge = &age;  // so what this means is i'm pointing to the address of another value in this case,
                      // the address of the value the age variable
    
    printf("%p\n", pAge);
    printf("%p\n", &age);
    
    birthday(pAge); /*why did i use the function on the pointer instead of age directly?,
                     so i used the function on the pointer because, normally functions act on a copy of our variable,
                     so if i used the function on the value of age directly in this case,
                     the function itself would actually be working on a copy the age variable and wouldn't actually be affecting the value of our variable,
                     so instead we pass a pointer to the function, so that teh function works on the address of our variable direclty,
                     in doing so, we avoid the otherwise rounabout way that functions work through,
                     in other words, the function works on the value stored in the address we pass to it,
                     this means that passing the address directly instead of declaring a pointer works the same way, and that is indeed the case*/
    
    printf("%d", age);

}

int birthday(int* age){
    (*age)++;
}