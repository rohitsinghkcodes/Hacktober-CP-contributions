#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int x[100000];
    for (int i=0;i<n;i++)
        cin>>x[i];
    sort(x,x+n);
    int l=-1,r=-1,ans=0;
    for (int i=0;i<n;i++)
    {
        if (x[i]<=r)
            continue;
        if (l==-1)
            l=x[i];
        else if(x[i]-l>k)
        {
            ans++;
            if (x[i]-x[i-1]<=k)
                l=-1;
            else
                l=x[i];
            r=x[i-1]+k;
        }
    }
    cout<<ans+(l!=-1)<<endl;
return 0;
}
