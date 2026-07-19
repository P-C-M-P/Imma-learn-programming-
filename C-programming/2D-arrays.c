#include<stdio.h>


// 2D arrays are arrays of arrays so: {{}, {}, {}}, kinda stuff you get it?


int main(){

    char numbers[][3] = {{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'},
                      {'*','0','#'}
    };

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%3c", numbers[i][j]);
        }
        printf("\n");
    }

}