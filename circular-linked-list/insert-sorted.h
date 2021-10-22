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

// Insert element in the list in a sorted way.
// Insert element at the approprite position.
struct Node* InsertSorted(struct Node* head, int data){
    // Create a new node
    struct Node* temp =(struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;

    // Corner Case 1 : If the list is empty
    if(head == NULL){
        temp->next = temp;
        return temp;
    }

    // Corner Case 2 : If the first element is bigger than the data.
    // Insert the temp node in the front of the list
    // I have used a custom function that I wrote earlier to insert at the beginning 
    // of the list.
    if(data < head->data){
        return InsertBegin(head, data);
    }

    // Navigate to the appropriate position
    struct Node* trav = head;
    while(trav->next->data < data && trav->next!=head){
        trav = trav->next;
    }

    // Insert the node at that appropriate position.
    struct Node* temp2 = trav->next;
    trav->next = temp;
    temp->next = temp2;

    return head;
}
