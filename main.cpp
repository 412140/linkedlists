#include "node.h"
#include "student.h"
#include <iostream>
#include <cstring>
/**
ghazi abbas
cpp linked lists functions

Sources:
canvas videos (directly used a lot of the code)
nick braun (worked together in class to complete most of the project)
mr galbraith (helping both of us in class )




*/


using namespace std;

//fxn prototypes

void add(char* newStu);
void print(Node* next);
Node* head = NULL;

int main()
{
   // make it global insetad Node* head = NULL;

    char* stuOne = new char[SIZE];
    strcpy(stuOne, "bike");
    add(stuOne);
    print(head);
    char* stuTwo = new char[SIZE];
    strcpy(stuTwo, "car");
    add(stuTwo);
    print(head);

    delete head; 
    head = NULL;

    return 0; //return
}

void add(char* newStu)
{
    Node* current = head;
    Student* stu = new Student();
    Node* nod = new Node(stu);
    stu->setName(newStu);

    if(current==NULL)
    {
        head = nod;

    }else{

        while(current->getNext() != NULL)
        {
            current = current->getNext();


        }

        current->setNext(nod);

    }


}

void print(Node* next)
{
    if(next==head)
    {
        cout << "students: " << endl;
        if(next != NULL)
        {
            cout << next->getStudent()->getName() << endl;
            print(next->getNext());
        }


    }

}