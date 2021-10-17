
#include <bits/stdc++.h>
using namespace std;
class Graph{
   class Node {
       public:
       string label;
           Node(string label){
               this->label=label;
           }
   };
   public:
   map<string,Node *>nodes;
   map<Node*,vector<Node *>>adj;
   void insertNode(string label){
       if(nodes.count(label)==0){
           vector<Node *>v;
           Node* n=new Node(label);
           nodes[label]=n;
           adj[n]=v;
       }
   }
   void addEdge(string from,string to){
       if(nodes.count(from)==0||nodes.count(to)==0)
           return;
       adj[nodes[from]].push_back(nodes[to]);
       // adj[nodes[to]].push_back(nodes[from]);
   }
   void print(){
       for(auto it:adj){
           cout<<it.first->label<<"->";
           for(auto j:it.second){
               cout<<j->label<<" ";
           }
           cout<<endl;
       }
   }
   void BFS(string start){
       map<Node*,bool>visited;
       queue<Node *>q;
       q.push(nodes[start]);
       while(!q.empty()){
           Node* temp=q.front();
           q.pop();
           visited[temp]=true;
           cout<<temp->label<<" ";
           for(auto i:adj[temp]){
               if(visited.count(i)==0){
                   visited[i]=true;
                   q.push(i);
               }
           }
       }
   }
};
int main()
{
   Graph gh;
   gh.insertNode("a");
   gh.insertNode("b");
   gh.insertNode("c");
   gh.insertNode("d");
   gh.insertNode("e");
   gh.insertNode("f");
   gh.insertNode("g");
   gh.addEdge("a","b");
   gh.addEdge("a","d");
   gh.addEdge("b","c");
   gh.addEdge("b","f");
   gh.addEdge("c","e");
   gh.addEdge("c","g");
   gh.addEdge("g","e");
   gh.addEdge("e","b");
   gh.addEdge("e","f");
   gh.addEdge("f","a");
   gh.addEdge("d","f");
   gh.print();
   gh.BFS("a");
   return 0;
}
#include <bits/stdc++.h>
using namespace std;
class Graph{
   class Node {
       public:
       string label;
           Node(string label){
               this->label=label;
           }
   };
   public:
   map<string,Node *>nodes;
   map<Node*,vector<Node *>>adj;
   void insertNode(string label){
       if(nodes.count(label)==0){
           vector<Node *>v;
           Node* n=new Node(label);
           nodes[label]=n;
           adj[n]=v;
       }
   }
   void addEdge(string from,string to){
       if(nodes.count(from)==0||nodes.count(to)==0)
           return;
       adj[nodes[from]].push_back(nodes[to]);
       // adj[nodes[to]].push_back(nodes[from]);
   }
   void print(){
       for(auto it:adj){
           cout<<it.first->label<<"->";
           for(auto j:it.second){
               cout<<j->label<<" ";
           }
           cout<<endl;
       }
   }
   void BFS(string start){
       map<Node*,bool>visited;
       queue<Node *>q;
       q.push(nodes[start]);
       while(!q.empty()){
           Node* temp=q.front();
           q.pop();
           visited[temp]=true;
           cout<<temp->label<<" ";
           for(auto i:adj[temp]){
               if(visited.count(i)==0){
                   visited[i]=true;
                   q.push(i);
               }
           }
       }
       cout<<endl;
   }
   void DFS(string start){
       map<Node*,bool>visited;
       stack<Node *>q;
       q.push(nodes[start]);
       while(!q.empty()){
           Node* temp=q.top();
           q.pop();
           visited[temp]=true;
           cout<<temp->label<<" ";
           for(auto i:adj[temp]){
               if(visited.count(i)==0){
                   visited[i]=true;
                   q.push(i);
               }
           }
       }
   }
};
int main()
{
   Graph gh;
   gh.insertNode("a");
   gh.insertNode("b");
   gh.insertNode("c");
   gh.insertNode("d");
   gh.insertNode("e");
   gh.insertNode("f");
   gh.insertNode("g");
   gh.addEdge("a","b");
   gh.addEdge("a","d");
   gh.addEdge("b","c");
   gh.addEdge("b","f");
   gh.addEdge("c","e");
   gh.addEdge("c","g");
   gh.addEdge("g","e");
   gh.addEdge("e","b");
   gh.addEdge("e","f");
   gh.addEdge("f","a");
   gh.addEdge("d","f");
   gh.print();
   gh.BFS("a");
   gh.DFS("a");
   return 0;
}
