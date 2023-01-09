/*-----BREADTH FIRST SEARCH-----
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
public:
	graph(int vertice); 
	void makeEdge(int v, int w);
	void BFS(int s);
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
void graph::BFS(int s)
{
	vector<bool> visited;
	visited.resize(vertice, false);
	list<int> queue;
	visited[s] = true;
	queue.push_back(s);
	while (!queue.empty()) {
		s = queue.front();
		cout << s << " ";
		queue.pop_front();
		for (auto adjec : adj[s]) {
			if (!visited[adjec]) {
				visited[adjec] = true;
				queue.push_back(adjec);
			}
		}
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
	cout << "Breadth First Traversal starting from vertex "<<s<<" is:\n";
	g.BFS(s);
	return 0;
}
