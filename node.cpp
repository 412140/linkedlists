#include "node.h"
#include <iostream>
using namespace std;

Node::Node(Student* nStudent)
{
    student = nStudent;
    next = NULL

}
Node::~Node()
{
    //explained to us in class
    delete student;
    next = NULL;

}
Node* Node::getNext()
{
    return next;
}
Student*  Node::getStudent() const
{
    return student;
}
void Node::setNext(Node* nNext)
{
    next = nNext;

}
