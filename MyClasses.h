#ifndef MYCLASSES_H
#define MYCLASSES_H

#include "listtools.h"
using namespace std;

template <class T>
class MyList {
    public:
    MyList(){}
    MyList(Node<T> *theHead){head = theHead;}
    void insertHead(T theData){
        head = new Node<T>(theData, head);
    }
    T deleteHead(){
        Node<T> *element;
        element = head;
        head = head->getLink();
        return element->getData();
        delete element;
    }
    bool search(T &target){
        Node<T> *point = head;
        while(point->getData() != target && point->getLink() != NULL){
            point = point->getLink();
        }
        if(point->getData() == target)
            return true;
        else
            return false;
    }
    void display(){
        cout << "List: " << endl;
        Node<T> *point = head;
        while(point->getLink() != NULL){
            cout << endl;
            cout << point->getData();
        }
    }
    private:
    Node<T> *head;
};



#endif//MYCLASSES_H