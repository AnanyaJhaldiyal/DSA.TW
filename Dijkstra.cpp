/*-----DIJKSTRA'S ALGORITHM-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define INFINITY 0x3f3f3f3f
typedef pair<int, int> group;
class Graph {
	int vertice;
	list<pair<int, int> >* adj;
public:
	Graph(int vertice); 
	void makeEdge(int u, int v, int w);
	void shortestPath(int s);
};
Graph::Graph(int vertice)
{
	this->vertice = vertice;
	adj = new list<group>[vertice];
}

void Graph::makeEdge(int u, int v, int w)
{
	adj[u].push_back(make_pair(v, w));
	adj[v].push_back(make_pair(u, w));
}
void Graph::shortestPath(int s)
{
	priority_queue<group, vector<group>,greater<group> >
		pq;
	vector<int> dist(vertice, INFINITY);
	pq.push(make_pair(0, s));
	dist[s] = 0;
    	while (!pq.empty()) {
		int u = pq.top().second;
		pq.pop();
		list<pair<int, int> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i) {
			int v = (*i).first;
			int weight = (*i).second;
			if (dist[v] > dist[u] + weight) {
				dist[v] = dist[u] + weight;
				pq.push(make_pair(dist[v], v));
			}
		}
	}
	printf("Dijkstra's single source shortest path is: \n");
	for (int i = 0; i < vertice;i++)
		printf("%d \t\t %d\n", i, dist[i]);
}
int main()
{ 
    int n,v,w,s,u,x;
    cout<<"enter the number of vertices: "<<endl;
    cin>>n;
    Graph g(n);
    cout<<"enter the number of vertices pairs: ";
    cin>>x;
    cout<<"enter the vertices pair: "<<endl;
	for(int i=0;i<x;i++){
        cin>>u>>v>>w;
        g.makeEdge(u,v,w);
    }
    cout<<"enter the vertice with which you want to start"<<endl;
    cin>>s;
	g.shortestPath(s);
	return 0;
}
