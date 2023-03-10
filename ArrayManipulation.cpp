//MIT License
//Copyright (c) 2023 Syed Noor Ali

#include <iostream>
using namespace std;

class Array{
    int *array;
    int add = 0;
    int size;
    public:
    Array(int size){
        array = new int[size];
        this->size = size;
    }
    float checkPercentage(){
        float f = (((this->add+1)/this->size) * 100);
        return f;
    }
    void addToArray(int n){
        if (add<0){
            add = 0;
        }
        if (add<size){
            array[add] = n;
            add++;
        }
        if (checkPc()>68){
            resize(2*size);
        }
    }
    void removeFromArray(){
        if (add<0){
            cout<<endl<<"All values removed already!"<<endl;
        }
        else {
            add-=1;
        }
    }
    void resize(int size){
        int *newarray = new int[size];
        if (size>this->size){
            for (int i=0;i<size;i++){
                newarray[i] = array[i];
            }
        }
        delete[] array;
        this->array = newarray;
        this->size = size;
    }
    int getSize(){
        return this->size;
    }
    void printArray(){
        cout<<endl<<"Array: "<<endl;
        if (add<=0){
            cout<<"Empty Array";
        }
        for (int i=0;i<add;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }
};

