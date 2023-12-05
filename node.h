#ifndef NODE_H
#define NODE_H
#include "student.h"
using namespace std;

class Node 
{
    public:
    //constructor
    Node(Student* student);
    //destructor
    ~Node();
    Node* getNext() const;
    Student getStudent() const;
    void setNext(Node* next);
    private: 
    Student* student;
    Node* next;

};



#endif
