#include<stdio.h>

int main(){

    FILE *pFile = fopen("writing-files.txt", "w");  // make a pointer that points to the address of the file we're creating(in this case the relative path)
    char text[] = "GREEEN CATS ARE FLYING IN THE SKY";

    if(pFile == NULL){  // if the value of pointer is NULL meaning there isn't a value stored there
        printf("Error!");
        return 1;
    }
    
    fprintf(pFile, "%s", text);  // write the file, first the address is identified with the pointer,
                                //  after which we write the contents of our text variable into it
    
    printf("file was written successfully!");

    fclose(pFile);
}