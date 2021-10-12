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

// Including all the header files
#include"stack.h"

// Return element on the top of stack.
// Return -1 if not valid.
int TopStackArray(){
  if(top==-1||top==MAXSIZE-1){
    return -1;
  }
  return stack[top];
}