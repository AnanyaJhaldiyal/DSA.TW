/*-----KRUSKALS ALGORITHM-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<bits/stdc++.h>
using namespace std;
#define edge pair<int,int>
class Graph{
    private:
    vector<pair<int,edge>>G;
    vector<pair<int,edge>>T;
    int *parent;
    int V;
    public:
    Graph(int V);
    void makeEdge(int u, int v,int w);
    int Find(int i);
    void Union(int u,int v);
    void kruskal();
};
Graph::Graph(int V){
    parent=new int[V];
    for(int i=0;i<V;i++)
    parent[i]=i;
    G.clear();
    T.clear();
}
void Graph::makeEdge(int u,int v,int w){
    G.push_back(make_pair(w,edge(u,v)));
}
int Graph::Find(int i){
    if(i==parent[i])
    return i;
    else
    return Find(parent[i]);
}
void Graph::Union(int u,int v){
    parent[u]=parent[v];
}
void Graph::kruskal(){
    int i,U,V;
    sort(G.begin(),G.end());
    for(i=0;i<G.size();i++){
        U=Find(G[i].second.first);
        V=Find(G[i].second.second);
        if(U!=V){
            T.push_back(G[i]);
            Union(U,V);
        }
    }
    cout<<"Edge: "<<"Weight"<<endl;
for(int i=0;i<T.size();i++){
    cout<<T[i].second.first<<"-"<<T[i].second.second<<" : "<<T[i].first;
    cout<<endl;
}
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
    g.kruskal();
	return 0;
}
