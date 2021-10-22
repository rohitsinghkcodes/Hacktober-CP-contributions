/*

MIT License

Copyright (c) 2020 Arsharaj Chauhan

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

*/

// Include all the required files
#include"circular-linked-list.h"

// Insert the element at the beginning of the circular linked list
struct Node* InsertBegin(struct Node* head, int data){
    // Make a new node 
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    // Corner Case - If the list is empty
    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    temp->next = head;

    // Reach the end of the list
    struct Node* trav = head;
    while(trav->next != head){
        trav = trav->next;
    }

    // Make the list circular
    trav->next = temp;

    return temp;
}
