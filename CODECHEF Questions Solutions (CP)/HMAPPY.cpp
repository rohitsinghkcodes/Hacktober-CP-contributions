#include<bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

ll n,m,*a,*b,*c;
ll cost=INT_MIN;

bool func(ll midd)
{
    ll i,bal=m;
    
    for(i=0;i<n;i++){
        ll r,d;
         d=max(0LL,c[i]-midd);
        r=(ll)ceil((ld)d/b[i]);
        
        if(r>bal)
            return 
            	false;
        bal-=r;
    }
    return 
    	true;
}
int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    cin>>n>>m;
    
    a=new ll[n];
    b=new ll[n];
    c=new ll[n];
    
    ll i;
    
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++){
        cin>>b[i];
        c[i]=a[i]*b[i];
        cost=max(cost,c[i]);
    }
    
    ll left=0,right=cost,last=right,midd;
    
    while(left<=right){
        midd=left+(right-left)/2;
        
        if(func(midd)){
            right=midd-1;
            last=midd;
        }
        else 
        	left=midd+1;
    }
    cout<<last<<endl;
    return 0;
}