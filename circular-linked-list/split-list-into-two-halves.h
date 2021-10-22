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

// Split the list into two halves.
// Changes reflect back to the original list.
// Implemented using Tortoise and Hare Algorithm.
void SplitList(struct Node* head, struct Node** lefthalf, struct Node** rightHalf){
    // Corner Case - If the original list is empty
    if(head == NULL){
        return;
    }

    // Corner Case - If there is only one element in the linked list
    if(head->next==head){
        *lefthalf = head;
        return;
    }

    struct Node* slow = head;
    struct Node* fast = head->next;

    // Naive approach to reach the middle of the list.
    while(fast->next != head){
        slow = slow->next;
        fast = fast->next;
        if(fast->next == head){
            break;
        }
        fast = fast->next;
    }

    // Get the reference to the left and right half.
    *lefthalf = head;
    *rightHalf = slow->next;

    // Seperating the lists.
    slow->next = *lefthalf;
    fast->next = *rightHalf;
}
