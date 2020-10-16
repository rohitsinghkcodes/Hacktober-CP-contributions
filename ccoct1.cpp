#include <iostream>
using namespace std;
#define ll long long int
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k,sum=0,flag=0;
	    cin>>n>>k;
	    ll arr[n];
	    for(ll i=0;i<n;i++){
	    cin>>arr[i];}
	    for(ll i=0;i<n;i++){
	    if(arr[i]<0)
	    continue;
	        sum+=arr[i];
	        if(sum<k){
	        cout<<i+1<<endl;
	        flag=1;
	        break;}
	        sum-=k;

	    }
	    if(flag==0)
	    cout<<n+(sum/k)+1<<endl;
	}
	return 0;
}
