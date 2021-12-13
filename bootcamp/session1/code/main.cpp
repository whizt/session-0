#include <stdio.h>
#include <string.h>
#include <stdlib.h> // dynamic ...
// Array: banayka elemen -> array of int, char, float, dkk...
// Struct : elemen yang memiliki beberapa tipe data

// Struct vs tipe data
// int float dkk.

// CRUD: Create, Read, Update, Delete
// Create -> bikin sebuah object
struct Course{
    char ID[10];
    char namaDosen[255];
};
struct Student//singular-Capital 
{
    /* data */
    char name[255];
    double GPA;
    Course c;
};
// Create
// untuk return struct data type maka bikin pointer
// karena jika tidak akan return value bukan objek/address
Student* create(char *name, double GPA, char *ID, char *namaDosen){
    Student *newStudent = (Student*)malloc(sizeof(Student));
    strcpy(newStudent->name,name);
    // karena malloc saja tidak sama dengan * maka diberi (Student*) karena tanpa itu returnnya memory bukan Student*
    // return struct sesuai student
    return newStudent;
}
// malloc -> memory allocation : alokasikan memory untuk menyimpan sesuatu
// 255+8+10+255 = sizeof(Student) = size dari Student object
// malloc(255+8+10+255)
// malloc(sizeof(Student))

// Read
void read(Student *s){// pass pointer yang menunjuk ke alamat student
// pakai arrow karena passing pointer s
    printf("Name: %s\n", s -> name); // s -> name sama dengan (*s).name
    printf("GPA: %lf\n", s -> GPA); // (*s).GPA
    printf("Course ID: %s\n", s -> c.ID); //(*s).c.ID
    printf("Nama DOsen: %s\n", s -> c.namaDosen); //(*s).c.namaDosen
}
int main(){
    // Student s = {"Dodi", 3.9, {"COMP123", "Pak Indra"}};
    // printf("%s ",s.name);
    // printf("%s\n", s.c.namaDosen);
    // read(&s);
    create("andrew",3.4,"123","hads");
    return 0;
}