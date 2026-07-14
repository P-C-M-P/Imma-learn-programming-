#include<stdio.h>

int main(){

    float PI = 3.14;
    float radius;
    float AREA, SURFACEAREA, VOLUME;

    printf("What is your radius? ");
    scanf("%f", &radius);

    AREA = PI * radius * radius;
    SURFACEAREA = 4 * PI * radius * radius;
    VOLUME = 4/3 * PI * radius * radius * radius;

    printf("The AREA(2D) is equal to: %f\n", AREA);
    printf("The SURFACEAREA(3D) is equal to: %f\n", SURFACEAREA);
    printf("The VOLUME(3D) is equal to: %f\n", VOLUME);

    return 0;

}