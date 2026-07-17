#include<stdio.h>
#include<unistd.h> // for linux and mac
#include<windows.h>  // for windows(obviously)

int main(){

    int timer;
    int age;
    int age1 = 0;
    
    printf("Enter a timer in seconds: ");
    scanf("%d", &timer);

    for( ; timer >= 0; timer--){
      /*^btw you add initialization here but if your varaiable is initialized elsewhere then no need to add it here, as in line 38*/
        Sleep(1000);  // a delay of 1000ms between each turn of the loop(upper case S in Sleep, used in windows)
        sleep(1000); // a delay of 1000ms between each turn of the loop(lower case s in sleep, used in mac and linux)
        printf("%d", timer);
    }

    printf("Enter your age: ");
    scanf("%d", &age);

    while(age <= 0){  // checks the condition first before proceeding with the block of code 
        printf("Please enter your real age: ");
        scanf("%d", &age);
    }
    printf("You are %d years old!", age);


    do{  // does the block of code first then enters the loop after checking the condition
        printf("Please enter your real age: ");
        scanf("%d", &age1);
    }while(age1 <= 0);

    printf("You are %d years old!", age1);

    for(int x = 10; x>=0; x--){
        
        if(x == 6){
            continue; // so basically this line says when x equals 6, skip the line which says print the number, so the output shouldn't print the number 6
        }
        
        printf("%d\n", x);
    }

}

