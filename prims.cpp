/*-----PRIMS ALGORITHM-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<bits/stdc++.h>
using namespace std;
# define INF INT_MAX
typedef pair<int, int> group;
class Graph
{
	int vertice;
	list< pair<int, int> > *adj;
public:
	Graph(int vertice); 
	void makeEdge(int u, int v, int w);
	void PRIMS();
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
void Graph::PRIMS()
{
	priority_queue<group,vector<group>,greater<group>>pq;
	int s = 0; 
	vector<int> key(vertice, INF);
	vector<int> parent(vertice, -1);
	vector<bool> MST(vertice, false);
	pq.push(make_pair(0, s));
	key[s] = 0;
	while (!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		if(MST[u] == true){
			continue;
		}
		MST[u] = true; 
		list< pair<int, int> >::iterator i;
		for (i = adj[u].begin(); i != adj[u].end(); ++i)
		{
			int v = (*i).first;
			int weight = (*i).second;
			if (MST[v] == false && key[v] > weight)
			{
				key[v] = weight;
				pq.push(make_pair(key[v], v));
				parent[v] = u;
			}
		}
	}
	printf("the edges in PRIMS MST are : \n");
	for (int i = 1; i < vertice; ++i)
		printf("%d : %d\n", parent[i], i);
}
int main()
{
	int n,v,w,u,x;
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
    g.PRIMS();
	return 0;
}
