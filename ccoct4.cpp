#include<bits/stdc++.h>
using namespace std;
int findIndex(int a[],int n,int x,int p){
int mina = 100000000, minp;
for(int i=0;i<n;i++)
if(a[i]==x){
if(abs(p-i)<mina){
mina=abs(p-i);
minp=i;
}
}
return minp;
}
void subMain(){
int N,X,p,k;
cin>>N>>X>>p>>k;
int a[N];
for(int i=0;i<N;i++)
cin>>a[i];
sort(a,a+N);
int index=findIndex(a,N,X,p);
int ount=0;
if(a[index]!=X){
a[k-1]=X;
sort(a,a+N);
ount++;
}
if(a[p-1]==X){
cout<<ount;
return;
}
else if(p<k && a[p-1]<X){
cout<<-1;
return;
}
else if(p>k && a[p-1]>X){
cout<<-1;
return;
}

index=findIndex(a,N,X,p)+1;
cout<<abs(p-index)+ount;

}
int main(){
int t;
cin>>t;
while(t--){
subMain();
cout<<"\n";
}
return 0;
}
