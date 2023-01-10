/*-----DEPTH FIRST SEARCH-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class graph {
int vertice;
vector<list<int>>adj;
vector<bool> visited;
public:
	graph(int vertice); 
	void makeEdge(int v, int w);
	void DFS(int s);
};
graph::graph(int vertice)
{
	this->vertice = vertice;
	adj.resize(vertice);
}
void graph::makeEdge(int v, int w)
{
	adj[v].push_back(w);
}
void graph::DFS(int s)
{
	visited.resize(vertice,false);
	//list<int> queue;
	visited[s] = true;
		cout << s << " ";
        list<int>::iterator i;
    for (i=adj[s].begin();i!= adj[s].end();++i){
        if (!visited[*i])
        DFS(*i);
}
}
int main()
{ 
    int n,v,w,s;
    cout<<"enter the number of vertices: "<<endl;
    cin>>n;
    graph g(n);
    cout<<"enter the vertices pair: "<<endl;
	for(int i=0;i<n;i++){
        cin>>v>>w;
        g.makeEdge(v, w);
    }
    cout<<"enter the vertice with which you want to start"<<endl;
    cin>>s;
	cout << "Depth First Traversal starting from vertex "<<s<<" is:\n";
	g.DFS(s);
	return 0;
}
