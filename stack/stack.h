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

/*
Stack is a list restricted to insert and delete element from only one side which is called as the
top of the stack.
Stack is a very crucial data structure to understand since it has a wide range of applications.
Some of them are brackets matching used in lexical scoping, function calls, recursion, and many 
more.
We can perform mainly two major operations on stack and that is push() and pop()
I have also implemented print() method just for sake of understanding. Ideal implementations does
not provide this thing.

Operations :-
*/

#ifndef _STACK_H
#define _STACK_H

// Including all the required header files.
#include<stdio.h>
#include<stdlib.h>

// Custom files
#include"array.h"
#include"push_array.h"
#include"pop_stack_array.h"
#include"top_stack_array.h"
#include"print_stack_array.h"
#include"node.h"
#include"push_stack_list.h"
#include"pop_stack_list.h"
#include"print_stack_list.h"
#include"top_stack_list.h"

// Main driver programs
#include"stack_array.h"
#include"stack_list.h"

#endif