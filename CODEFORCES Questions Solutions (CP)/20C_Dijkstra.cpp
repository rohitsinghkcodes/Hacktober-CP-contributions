#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
multiset <pair<int,int> >s;

int main()
{	int n,m;
	cin>>n>>m;
	vector <int> adj[n+1];
	vector <int> weight[n+1];
	for(int i=0;i<m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		adj[a].push_back(b);
		adj[b].push_back(a);
		weight[a].push_back(c);
		weight[b].push_back(c);
	}
	int parent [n+1];
	fill_n(parent,n+1,0);
	parent[1]=1;
	int visited[n+1]={0};
	visited[1]=1;
	int distance[n+1];
	fill_n(distance,n+1,INT_MAX);
	distance[1]=0;
	s.insert({0,1});
	while(!s.empty())
	{
		auto itr=s.begin();
		s.erase(s.begin());
		int w=itr->first;
		int node=itr->second;
		visited[node]=1;
		for(int i=0;i<adj[node].size();i++)
		{
			int temp=adj[node][i];
			if(visited[temp]==1)
			{
				continue;
			}
			else{
				if(distance[node]+weight[node][i]<distance[temp])
				{
					parent[temp]=node;
					if(s.find({distance[temp], temp}) != s.end())
					{s.erase({distance[temp], temp});}
					distance[temp]=distance[node]+weight[node][i];
					s.insert({distance[temp], temp});	}
			}
		}
	}	
	// if(distance[n]==INT_MAX)
	// {
	// 	cout<<-1<<endl;
	// }
	if(visited[n]==0)
	{
		cout<<-1<<endl;
	}
	else{
		int arr[n+1]={0};
	int size=0;
	int i=n;
	while(i!=1)
	{
		arr[size]=i;
		size++;
		i=parent[i];

	}
	cout<<"1 ";
	for(int i=size-1;i>=0;i--)
	{
		cout<<arr[i]<<" ";

	}
	cout<<endl;

	}
	

	return 0;
}