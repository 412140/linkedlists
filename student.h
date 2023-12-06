#ifndef STUDENT_H
#define STUDENT_H

#include <cstring>
#include <iostream>
using namespace std;
const int SIZE = 50;

class Student
{
    public:
    char* setName(char nameOne);
    char* getName();

    private:
    char name[SIZE];

};
#endif