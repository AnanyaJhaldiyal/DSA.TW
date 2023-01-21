/*-----FRACTIONAL KNAPSACK PROBLEM-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<bits/stdc++.h>
using namespace std;
bool comparison(pair <float,int> p1,pair<float,int> p2)
{
    if(p1.first>p2.first)
	return p1.first;
    else
    return p2.first;
}
int FractionalKnapsack(vector <int> TotalWeights,vector<int>TotalValues,int c)
{
	int l = TotalWeights.size();
	int tv = 0;
	vector <pair <float, int>>r(l, make_pair(0.0, 0));
	for(int i = 0; i < l; i++)
		r[i] = make_pair(TotalValues[i]/TotalWeights[i], i);
      sort(r.begin(), r.end(), comparison);
	for(int i = 0; i < l; i++)
	{
		if(c==0)
			break;
		int index = r[i].second;
		if(TotalWeights[index] <= c)
		{
			c -= TotalWeights[index];
			tv += TotalValues[index];
		}
		else
		{
			int x = TotalValues[index]*(float(c)/float(TotalWeights[index]));
			tv += x;
			c = 0;
		}
	}
	return tv;
}
int main()
{
    int n;
    cout<<"enter the number of items: ";
    cin>>n;
    int weight;
    int value;
    vector <int> TotalWeights;
    vector <int> TotalValues;
    for(int i=0;i<n;i++){
     cout << "Enter the weight of the item "<<i+1<< " :";
     cin >> weight;
     TotalWeights.push_back(weight);
     cout << "Enter the value of the item " << i+1 <<" :";
     cin >> value;
       TotalValues.push_back(value);
    }
	cout << "Enter the capacity of the knapsack" << endl;
	int c;
	cin >> c;
	cout << "The maximum possible Values are: " << FractionalKnapsack(TotalWeights, TotalValues, c) << endl;
    return 0;
}