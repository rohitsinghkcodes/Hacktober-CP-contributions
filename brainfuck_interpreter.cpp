#include<bits/stdc++.h>
using namespace std;
string brainLuck(const string &code, const string &input) {
  int tape[10000] = {0};
  int data_pointer = 1000;
  int input_pointer = 0;
  int len = (int)code.length();
  string output_str = "";
  int* jump_table = (int*) malloc(sizeof(int) * len);
  stack<int> my_stack;
  for(int i = 0; i < len; i++) {
    if(code[i] == '[') {
      my_stack.push(i);
    } else if(code[i] == ']') {
      int index = my_stack.top();
      my_stack.pop();
      jump_table[index] = i;
      jump_table[i] = index;
    }
  }
  
//   --->>> Much better for readability and visualization but gives TLE for me.
  
//   unordered_map<int, int> jump_table;
//   for(int i = 0; i < len; i++) {
//     if(code[i] == '[') {
//       my_stack.push(i);
//     } else if(code[i] == ']') {
//       int index = my_stack.top();
//       my_stack.pop();
//       jump_table.insert(pair<int, int>(index, i));
//       jump_table.insert(pair<int, int>(i, index));
//     }
//   }

  for(int i = 0; i < len; i++) {
    char inst = code[i];
    switch(inst) {
      case '>': 
        data_pointer++;
        break;
      case '<': 
        data_pointer--;
        break;
      case '+': 
        tape[data_pointer]++;
        tape[data_pointer] %= 256;
        break;
      case '-': 
        tape[data_pointer]--;
        tape[data_pointer] %= 256;
        break;
      case '.':
        output_str += (char)tape[data_pointer];
        break;
      case ',': 
        tape[data_pointer] = input[input_pointer];
        input_pointer++;
        break;
      case '[':
        if(tape[data_pointer] == 0)
          i = jump_table[i];
        break;
      case ']':
        if(tape[data_pointer] != 0) 
          i = jump_table[i];
        break;
      }  
    }   
  return output_str;
}
