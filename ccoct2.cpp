#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,k,x,y;
cin>>n>>k>>x>>y;
if(k==0){
    if(x==y)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
else{
    int flag=0;

for(int i=0;i<1000;i++){
if(x==y){
cout<<"YES"<<endl;
flag=1;
break;
}
x=(x+k)%n;
}
if(flag==0)
cout<<"NO"<<endl;
}
}
return 0;
}
