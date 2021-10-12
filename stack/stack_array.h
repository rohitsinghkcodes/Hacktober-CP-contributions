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

// Including all the required header files.
#include"stack.h"

// Array based implementation of the stack.
void StackArray(){
  int choice,elem;

  printf("\tStack\n\n");

  do{
    printf("1. Push the element onto the stack\n");
    printf("2. Removes element from the stack\n");
    printf("3. Print element on the top of the stack\n");
    printf("0. Exit\n\n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
      case 0: break;
      case 1:
        printf("Enter the element - ");
        scanf("%d",&elem);

        PushStackArray(elem);
        PrintStackArray();

        break;
      case 2:
        PopStackArray();
        PrintStackArray();

        break;
      case 3:
        printf("Top of Stack : ");
        printf("%d ",TopStackArray());
        printf("\n\n");

        break;
      default: printf("\nInvalid choice!\nEnter a valid choice?\n\n");
    }
  }while(choice!=0);
}