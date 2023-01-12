/*-----FLOYD WARSHALL'S ALGORITHM-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:201max460
CLASS ROLL NUMBER:54
*/
#include <iostream>
#include<limits.h>
#include <bits/stdc++.h>
using namespace std;
#define INFINITY INT_MAX
#define max 4
void floydWarshalls(int dist[][max])
{
    int i, j, k;
    for (k = 0; k < max; k++)
    {
    for (i = 0; i < max; i++)
    {
     for (j = 0; j < max; j++)
     {
           if (dist[i][j]> dist[i][k]+dist[k][j] && dist[i][k]!= INFINITY && dist[k][j]!=INFINITY)
              {
                dist[i][j] = dist[i][k] + dist[k][j];
                 }
              }
         }
 }
    for( i = 0; i < max; i++)
    {
       cout<<endl;
       for (j = 0; j < max; j++)
       {
        if (dist[i][j] == INFINITY)
                cout << "INFINITY"<< " ";
        else
          cout<<dist[i][j]<<"\t";
      }
    }
}
int main()
{
    int dist[max][max];
    cout<<"ENTER VALUES OF ADJACENCY MATRIX\n\n";
    for (int i = 0; i < max; i++)
    {
        for (int j = 0; j < max; j++)
        {
            cout<<"enter the value of ["<<i<<"]"<<"["<<j<<"] : ";
            cin>>dist[i][j];
        }
    }
    floydWarshalls(dist);
    
    return 0;
 
}