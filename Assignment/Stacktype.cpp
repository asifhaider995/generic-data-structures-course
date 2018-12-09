#include "stacktype.h"
#include <iostream>
#include <cstddef>
using namespace std;

template <class Itemtype>
Stacktype<Itemtype>::Stacktype(){
    topPtr = NULL;
}

template <class Itemtype>
Stacktype<Itemtype>::~Stacktype(){
    while(!isEmpty()){
        Pop();
    }
}

template <class Itemtype>
bool Stacktype<Itemtype>::isEmpty(){
    return (topPtr == NULL);
}

template <class Itemtype>
bool Stacktype<Itemtype>::isFull(){
    Nodetype *newNode;
    try{
        newNode = new Nodetype;
        delete newNode;
        return false;
    }
    catch(bad_alloc&exception){
        return true;
    }
}

template <class Itemtype>
void Stacktype<Itemtype>::Push(Itemtype item){
    if(isFull())
        throw fullStack();

    Nodetype *location;
    location = new Nodetype;
    location->data = item;
    location->next = topPtr;
    topPtr = location;

}

template <class Itemtype>
void Stacktype<Itemtype>::Pop(){
    if(isEmpty())
        throw emptyStack();

    Nodetype *location;
    location = topPtr;
    topPtr = topPtr->next;
    delete location;

}

template <class Itemtype>
Itemtype Stacktype<Itemtype>::Top() {
    if(isEmpty())
        throw emptyStack();
    else
        return topPtr->data;
}

template <class Itemtype>
void Stacktype<Itemtype>::makeEmpty(){
    while(!isEmpty()){

    }
}


