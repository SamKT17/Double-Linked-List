//
//  main.cpp
//  Double Linked List Obj
//
//  Created by Sam Thomas on 1/15/20.
//  Copyright © 2020 Punch a Tree. All rights reserved.
//

#include <iostream>
#include "List.hpp"

using namespace std;

// prototypes for test cases
void testCase1(List list, int num);
void testCase2(List list, int num);
void testCase3(List list);
void testCase4(List list);

int main(int argc, const char * argv[]) {
    int value;
    
    printf("Enter value for test cases: ");
    cin >> value;
    cout << "\n";
    
    List list;
    
    testCase1(list, value);
    testCase2(list, value);
    testCase3(list);
    testCase4(list);
}

void testCase1(List list, int num) {
    cout << "This tests the insertFront for both int and pointer. \n";
    
    int x = num;
    int *test = &x;
    
    for (int i = 0; i < 4; i++) {
        list.insertFrontInt(i);
    }
    cout << "The list before inserting " << num << "." << endl;
    list.printList();
    list.insertFrontInt(num);
    cout << "This list after. \n";
    list.printList();
    
    cout << "\n";
    
    list.removeFrontInt();
    
    cout << "The list before inserting " << num << " as a pointer." << endl;
    list.printList();
    list.insertFrontPtr(test);
    cout << "This list after. \n";
    list.printList();
    
    cout << "\n";
}

void testCase2(List list, int num) {
    cout << "This tests the insertRear functions for both int and pointers. \n";
    
    int x = num;
    int *test = &x;
    
    for (int i = 0; i < 4; i++) {
        list.insertFrontInt(i);
    }
    
    cout << "The list before adding " << num << "." << endl;
    list.printList();
    list.insertRearInt(num);
    cout << "The list after \n";
    list.printList();
    
    cout << "\n";
    
    list.removeRearInt();
    
    cout << "The list before adding " << num << " as a pointer." << endl;
    list.printList();
    list.insertRearPtr(test);
    cout << "The list after. \n";
    list.printList();
    
    cout << "\n";
}

void testCase3(List list) {
    cout << "This tests the removeFront function for both int and ptrs. \n";
    
    int x = 5;
    int *test = &x;
    
    for (int i = 0; i < 3; i++) {
        list.insertFrontInt(i);
    }
    list.insertFrontPtr(test);
    
    cout << "The list before removing first ptr: \n";
    list.printList();
    cout << list.removeFrontPtr() << endl;
    cout << "This list after: \n";
    list.printList();
    
    cout << "\n";
    
    cout << "The list before removing first int: \n";
    list.printList();
    cout << list.removeFrontInt() << endl;
    cout << "This list after: \n";
    list.printList();
    
    cout << "\n";
}

void testCase4(List list) {
    cout << "This tests the removeRear function for both int and ptrs. \n";
    
    int x = 5;
    int *test = &x;
    
    for (int i = 0; i < 4; i++) {
        list.insertFrontInt(i);
    }
    list.insertRearPtr(test);
    
    cout << "This list before removing last ptr: \n";
    list.printList();
    cout << list.removeRearPtr() << endl;
    cout << "The list after: \n";
    list.printList();
    
    cout << "\n";
    
    cout << "The list before removing last int: \n";
    list.printList();
    cout << list.removeFrontInt() << endl;
    cout << "This list after: \n";
    list.printList();
    
    cout << "\n";
}
