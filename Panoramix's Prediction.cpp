#include <bits/stdc++.h>
using namespace std;
int prime[25];
int main()
{
    int i, j, n, m, p, sq;
    bool b;
    prime[0]=2;
    cin>>n>>m;
    p=1;
    for(i=3; i<=50; i+=2){
        sq = sqrt(i);
        b = true;
        for(j=2; j<=sq; j++){
            if(i%j==0){
                b=false;
                break;
            }
        }
        if(b==true){
            prime[p++]=i;
        }
    }
    for(i=0; i<=14; i++){
        if(prime[i]==n){
            b = true;
            break;
        }
    }
    if(prime[i+1]==m && b==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
