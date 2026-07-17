#include<stdio.h>
#include<unistd.h> // for linux and mac
#include<windows.h>  // for windows(obviously)

int main(){

    int timer;
    
    printf("Enter a timer in seconds: ");
    scanf("%d", &timer);

    for( ; timer >= 0; timer--){
      /*^btw you add initialization here but if your varaiable is initialized elsewhere then no need to add it here*/
        Sleep(1000);  // a delay of 1000ms between each turn of the loop(upper case S in Sleep, used in windows)
        sleep(1000); // a delay of 1000ms between each turn of the loop(lower case s in sleep, used in mac and linux)
        printf("%d", timer)
    }

}