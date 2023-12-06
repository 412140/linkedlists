#include "student.h"
#include <cstring>
using namespace std;

char* Student::setName(char* nameOne)
{
    strcpy(name, nameOne); // also explained in class
    //return;
}

char* Student::getName()
{
    return name;

}