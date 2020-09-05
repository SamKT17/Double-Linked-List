//
//  List.cpp
//  Double Linked List Obj
//
//  Created by Sam Thomas on 1/15/20.
//  Copyright © 2020 Punch a Tree. All rights reserved.
//

#include "List.hpp"
#include <iostream>

using namespace std;

List::List() {
    front = nullptr;
    rear = nullptr;
}

void List::insertFrontInt(int d) {
    node *p = new node;
    p->Data = d;
    if (front == nullptr) { // if the list is empty
        p->next = p->prev = nullptr;
        front = p;
        rear = p;
    } else { // if the list has or more items
        p->next = front;
        p->prev = nullptr;
        front = p;
    }
}

void List::insertFrontPtr(void *d) {
    node *p = new node;
    p->ptrData = d;
    if (front == nullptr) { // if the list is empty
        p->next = p->prev = nullptr;
        front = p;
        rear = p;
    } else { // if the list has or more items
        p->next = front;
        p->prev = nullptr;
        front = p;
    }
}

void List::insertRearInt(int d) {
    node *p;
    p = new node;
    if (rear == nullptr) { // empty list
        rear = front = p;
        p->Data = d;
    } else {
        rear->next = p;
        p->prev = rear;
        rear = p;
        p->Data = d;
        p->next = nullptr;
    }
}

void List::insertRearPtr(void *d) {
    node *p;
    p = new node;
    if (rear == nullptr) { // empty list
        rear = front = p;
        p->ptrData = d;
    } else {
        rear->next = p;
        p->prev = rear;
        rear = p;
        p->ptrData = d;
        p->next = nullptr;
    }
}


int List::removeFrontInt(){
    node *p;
    int hold = 0;
    if (front == nullptr){ // if list is empty
        printf("List is empty.");
    } else if (front == rear) {
        hold = rear->Data;
        delete front;
        front = rear = nullptr;
    } else {
        hold = front->Data;
        p = front; // sets p to point at front is pointing at
        front = front->next; // sets front to point at the next node
        front->prev = nullptr; // making the prev part of the front node null
        delete p;
    }
    return hold;
}

void* List::removeFrontPtr(){
    node *p;
    void* hold = nullptr;
    
    if (front == nullptr){ // if list is empty
        printf("List is empty.");
    } else if (front == rear) {
        hold = rear->ptrData;
        delete front;
        front = rear = nullptr;
    } else {
        hold = front->ptrData;
        p = front; // sets p to point at front is pointing at
        front = front->next; // sets front to point at the next node
        front->prev = nullptr; // making the prev part of the front node null
        delete p;
    }
    return hold;
}

// This Function removes the last node in the list.
int List::removeRearInt() {
    int hold = 0;
    
    if (front == nullptr) { // list is empty
        printf("The list is empty.");
    }
    else if (front == rear) { // only 1 node
        hold = rear->Data;
        delete rear; // rear is the address for the OS
        front = rear = nullptr;
    }
    else { // list has 2 or more nodes/items
        hold = rear->Data;
        rear = rear->prev;
        delete rear->next;
        rear->next = nullptr;
    }
    return hold;
}

// This Function removes the last node in the list.
void* List::removeRearPtr() {
    void* hold = nullptr;
    
    if (front == nullptr) { // list is empty
        printf("The list is empty.");
    }
    else if (front == rear) { // only 1 node
        hold = rear->ptrData;
        delete rear; // rear is the address for the OS
        front = rear = nullptr;
    }
    else { // list has 2 or more nodes/items
        hold = rear->ptrData;
        rear = rear->prev;
        delete rear->next;
        rear->next = nullptr;
    }
    return hold;
}

void List::printList() {
    node* tmp = front;
    
    while(tmp != nullptr) {
        cout << "(" << tmp->Data << ", " << tmp->ptrData << ")" << ", ";
        tmp = tmp->next;
    }
    cout << "" << endl;
}
