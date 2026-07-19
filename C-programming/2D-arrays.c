#include<stdio.h>

int main(){

    char numbers[][3] = {{'1','2','3'},
                      {'4','5','6'},
                      {'7','8','9'},
                      {'*','0','#'}
    };
    
    char fruits[][10] = {"GREEN", 
                         "BANANA", 
                         "TOMATO", 
                         "POTATO", 
                         "LAPUTA"};
                         
    fruits[0][0] = 'N';
    fruits[0][5] = 'G';
    
    int x = sizeof(fruits)/sizeof(fruits[0]);
    
    for(int i = 0; i < x; i++){
        printf("%s ", fruits[i]);
    }
    printf("\n");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%3c", numbers[i][j]);
        }
        printf("\n");
    }

	char names[3][25];
	char name[4][26];
	
	int size = sizeof(name)/sizeof(name[0]);

    
    for(int i = 0; i < size; i++){
        printf("Enter a name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][sizeof(name[i]) - 1] = '\0';
    }
    
    
    for(int i = 0; i < size; i++){
        printf("%s", name[i]);
    }
}

