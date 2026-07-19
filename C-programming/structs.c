#include<stdio.h>
#include<string.h>
#include<stdbool.h>

typedef struct{
    int age;
    char name[50];
    float gpa;
    bool isfulltime;
}Student;

void printstudentinfo(Student student);

int main(){

    Student student1 = {89, "spongebob", 3.45, false};
    Student student2 = {89897, "jeff", 2.5, true};
    Student student3 = {5, "rick", 4.0, false};
    Student student4 = {0}; // so if you don't assign your structs with values initially you might get undefined behavior
                           //so at least set it to 0 as is shown above
                    
    
    strcpy(student4.name, "greg"); // so basically this assign the name greg to the student4.name value, which i end up overriding in lines 36-38
    
    
    printf("How old are you? ");
    scanf("%d", &student4.age);
    
    printf("What's your gpa? ");
    scanf("%f", &student4.gpa);
    
    printf("are you a full time student? ");
    scanf("%d", &student4.isfulltime);
    getchar();
    
    printf("what's your name? ");
    fgets(student4.name, sizeof(student4.name), stdin);
    student4.name[strlen(student4.name)-1] = '\0';
    
    printstudentinfo(student1);
    printstudentinfo(student2);
    printstudentinfo(student3);
    printstudentinfo(student4);
}

void printstudentinfo(Student student){
    printf("%d\n", student.age);
    printf("%s\n", student.isfulltime ? "yea":"nah");
    printf("%.2f\n", student.gpa);
    printf("%s\n", student.name);
    printf("\n");
}
