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

// Including all the required header files
#include"stack.h"

// Prints all the elements on the stack
void PrintStackList(){
  struct Node* temp=tos;

  printf("\nStack : ");

  while(temp!=NULL){
    printf("%d ",temp->data);
    temp=temp->next;
  }

  printf("\n\n");
}