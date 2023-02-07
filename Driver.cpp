#include <iostream>
#include "ArrayManipulation.cpp";
using namespace std;
int main(){
        Array *a = new Array(5);
        a->addArray(5);
        a->addArray(5);
        a->printArray();
        a->remArray();
        a->remArray();
        a->printArray();
        a->addArray(5);
        a->addArray(5);
        a->addArray(5);
        a->printArray();
        a->remArray();
        a->remArray();
        a->remArray();
        a->printArray();
        a->remArray();
        a->printArray();
        cout<<endl<<"*******************************************************";
        cout<<endl<<a->getSize()<<endl;
        a->addArray(5);
        a->addArray(5);
        a->addArray(5);
        a->addArray(5);
        a->addArray(5);
        cout<<endl<<a->getSize()<<endl;
    a->addArray(5);
    a->addArray(5);
    a->addArray(5);
    a->addArray(5);
    a->addArray(5);
    cout<<endl<<a->getSize()<<endl;
}
