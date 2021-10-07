#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){


vector<int> arr={1,1,2,3,3};


/*
 int temp[101]={0};
//   int p=*size;
  
  for(int i=0;i<5;i++){
    temp[arr[i]]++;
  }

  for(int x:temp){
      cout<<x<<" ";
  }
  cout<<endl;
  int c=0;
  int j=0;
  for(int i=0;i<101;i++){
    if(temp[i]>=1){
      c++;
      arr[j]=i;
      j++;
      
    }
  }

  for(int x: arr){
      cout<<x<<" ";
  }
*/

    // using 2 pointers approach.....

    int i=0;
    int j=i+1;
    while (j<5)
    {
        if (arr[i]==arr[j])
        {
            j++;
        }
        else{

            i++;
            arr[i]=arr[j];
        }
        
    }

    for(int x: arr){
      cout<<x<<" ";
  }
    
    return 0;
}
