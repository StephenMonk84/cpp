#include "Node.h"

class Node{
    private:
        int value;
        Node* prev;
        Node* next;

    Node(){
        value = 0;
        prev=next=nullptr;
    }


    int getValue(){
        return value;
    }

    void setValue(int x){
        value = x;
    }
};