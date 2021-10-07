#include <iostream>
#include <bits/stdc++.h>
using namespace std; 

int main(){

// cin >> n>>m;
vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};

    for (int j = 0; j < arr[0].size(); j++)
    {
        if(j&1){
            for (int i = arr.size() - 1; i >= 0; i--)
            {
                // cout<<i<<j<<" ";
                cout<<arr[i][j]<<" ";
            }
            
        }
        else{
             for (int i = 0; i < arr.size(); i++)
        {
        //    cout<<i<<j<<" ";
            cout<<arr[i][j]<<" ";
        }
        }
       
        
    }

 
    return 0;
}