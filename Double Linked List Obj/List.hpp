//
//  List.hpp
//  Double Linked List Obj
//
//  Created by Sam Thomas on 1/15/20.
//  Copyright © 2020 Punch a Tree. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <stdio.h>

class List {
    
    struct node {
        int Data = 0;
        node *next;
        node *prev;
        void* ptrData = nullptr;
    };
    
private:
    node *front;
    node *rear;
    
public:
    List();
    void insertFrontInt(int d);
    void insertFrontPtr(void *d);
    void insertRearInt(int d);
    void insertRearPtr(void *d);
    int removeFrontInt();
    void* removeFrontPtr();
    int removeRearInt();
    void* removeRearPtr();
    void printList();
};

#endif /* List_hpp */
