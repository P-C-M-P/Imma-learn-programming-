#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
    int age;
    char name[50];
    float gpa;
    bool isfulltime;
}Student;

int main(){

    Student student1 = {89, "spongebob", 3.45, false};
    Student student2 = {89897, "jeff", 2.5, true};
    Student student3 = {5, "rick", 4.0, false};
    Student student4 = {0}; // so if you don't assign your structs with values initially you might get undefined behavior
                           //so at least set it to 0 as is shown above
                    
    
    strcpy(student4.name, "greg");
    
    
    printf("How old are you? ");
    scanf("%d", &student4.age);
    

    printf("%d\n", student1.age);
    printf("%s\n", student1.isfulltime ? "yea":"nah");
    printf("%.2f\n", student1.gpa);
    printf("%s\n", student1.name);
    
    printf("%s\n", student4.name);
    printf("%d\n", student4.age);
    printf("%.2f\n", student4.gpa);
}