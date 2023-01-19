/*-----ACTIVITY SELECTION PROBLEM-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include <bits/stdc++.h>
using namespace std;
void ActivitySelection(int starting[], int finish[], int n)
{
	int i=0, j;
	cout << "Following activities are selected: " << endl;
	cout << i << " ";
	for (j = 1; j < n; j++) {
		if (starting[j] >= finish[i]) {
			cout << j << " ";
			i = j;
		}
	}
}
int main()
{
    int n,i;
     cout<<"enter the limit: ";
    cin>>n;
    int s[n];
	int f[n];
    for(i=0;i<n;i++){
        cout<<"enter the starting time of activity "<<i+1<<" : ";
        cin>>s[i];
         cout<<"enter the ending time of activity "<<i+1<<" : ";
         cin>>f[i];
    }
	ActivitySelection(s, f, n);
	return 0;
}
