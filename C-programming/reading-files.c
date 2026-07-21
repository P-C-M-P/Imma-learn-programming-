#include<stdio.h>

int main(){

    FILE *pFile = fopen("writing-files.txt", "r");
    char buffer[1024] = {0};

    if(pFile == NULL){
        printf("couldn't open file!");
        return 1;
    }
    
    while(fgets(buffer, sizeof(buffer), pFile)){
        printf("%s", buffer);
    }

    fclose(pFile);
}