//code by Nikhil Nagrale
//nikhilnagrale2 on EveryPlatform
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int temp;
    int ans=0;
    while(n--){
        cin>>temp;
        ans+=temp;
    }
    if(ans)
    cout<<"HARD"<<endl;
    else
    cout<<"EASY"<<endl;
    return 0;
}