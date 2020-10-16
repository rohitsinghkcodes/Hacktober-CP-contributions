#include<bits/stdc++.h>
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace std;
int main(){
std::ios::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
int t;
cin>>t;
while(t--){
int n,flag1=0;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
arr[i]=i+1;
do{
int flag=0;
for(int i=0;i<n-1;i++){if((arr[i]&arr[i+1])<=0){flag=1;break;}}
if(flag==1)
continue;
if(flag==0){
for(int i=0;i<n;i++)
cout<<arr[i]<<" ";
flag1=1;
break;}
}while(next_permutation(arr,arr+n));
if(flag1==0)
cout<<-1<<endl;
else
cout<<endl;
}
return 0;
}
