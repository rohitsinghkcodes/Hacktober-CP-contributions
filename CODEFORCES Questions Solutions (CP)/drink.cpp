#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    double sum=0.0;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    sum=sum/size;
    cout<<sum;
    return 0;
}