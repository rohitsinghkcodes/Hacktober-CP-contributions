#include <bits/stdc++.h>
using namespace std;

int main() 
  {
    int T;
    long long int N,c,i;
	cin>>T;
	while(T>0)
	{
	    c=0;
	    cin>>N;
	    long long int A[N];
	    for(i=0;i<N;i++)
	    cin>>A[i];
	    sort(A, A + N, greater<long long int>());
	    for (i=0; i<N-1; i++)
	    {
	     if (A[i] != A[i+1] && A[i]!=0)
	     c++;
	    }
	    if(A[N-1]!=0)
	    c++;
	    cout<<c<<endl;
	    T--;
	}
	}
