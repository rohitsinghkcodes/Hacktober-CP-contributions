#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){


vector<int> arr={7,1,5,3,6,4};
    int min=arr[0];
    int profit=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        profit=max(profit,arr[i]-min);
        
    }
    cout<<min<<" "<<profit;

    return 0;
}