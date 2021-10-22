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

// Insert the element at the end of the circular linked list.
// Return the address of the head node later
struct Node* InsertEnd(struct Node* head, int data){
    // Create a new node
    struct Node* temp =(struct Node*) malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    // Corner case - if the list is empty
    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    // Reach to the end of the list
    struct Node* trav = head;
    while(trav->next != head){
        trav = trav->next;
    }
    trav->next = temp;
    temp->next = head;

    return head;
}