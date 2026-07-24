// the first loop just prints out squares less than or equal to the number
// the secong loop prints out even sqaures less than or equal to the number
// the third loop prints out odd squares less than or equal to the number

#include<stdio.h>

int main(){
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for(int i = 1; i*i <= num; i++){
        printf("%d\n", i*i);
    }
    
    printf("\n");
    
    for(int i = 1; i*i <= num; i++){
        if((i % 2) == 0){
            printf("%d\n", i*i);
        }
    }
    
    printf("\n");
    
    for(int i = 1; i * i <= num; i++){
        if(i % 2){
            printf("%d\n", i*i);
        }
    }
    
}