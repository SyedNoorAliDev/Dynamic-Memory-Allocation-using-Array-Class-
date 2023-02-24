#include <iostream>
#include "ArrayManipulation.cpp";
using namespace std;
int main(){
        Array *a = new Array(5);
        a->addToArray(5);
        a->addToArray(5);
        a->printArray();
        a->removeFromArray();
        a->removeFromArray();
        a->printArray();
        a->addToArray(5);
        a->addToArray(5);
        a->addToArray(5);
        a->printArray();
        a->removeFromArray();
        a->removeFromArray();
        a->removeFromArray();
        a->printArray();
        a->removeFromArray();
        a->printArray();
        cout<<endl<<"*******************************************************";
        cout<<endl<<a->getSize()<<endl;
        a->addToArray(5);
        a->addToArray(5);
        a->addToArray(5);
        a->addToArray(5);
        a->addToArray(5);
        cout<<endl<<a->getSize()<<endl;
    a->addArray(5);
    a->addArray(5);
    a->addArray(5);
    a->addArray(5);
    a->addArray(5);
    cout<<endl<<a->getSize()<<endl;
}
