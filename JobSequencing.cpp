/*-----JOB SEQUENCING PROBLEM-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<bits/stdc++.h>
using namespace std;
struct job {
	char id; 
	int deadline; 
	int profit;
};
bool comparison(job a, job b)
{
	return (a.profit>b.profit);
}
void jobSequencing(job arr[], int n)
{
    sort(arr, arr + n, comparison);
 
    int result[n]; 
    bool slot[n]; 
    for (int i = 0; i < n; i++)
        slot[i] = false;
    for (int i = 0; i < n; i++) {
      int x=min(n, arr[i].deadline) - 1;
        for (int j = x; j >= 0; j--) {
            if (slot[j] == false) {
                result[j] = i; 
                slot[j] = true; 
                break;
            }
        }
    }
    for (int i = 0; i < n; i++)
        if (slot[i])
            cout << arr[result[i]].id << " ";
}
int main()
{
    int n;
    cout<<"enter total number of jobs: ";
    cin>>n;
	job arr[n];
    for(int i=0;i<n;i++){
    cout << "Enter id of job "<<i+1<<" :";
    cin >> arr[i].id;
    cout << "Enter deadline of job "<<i+1<<" :";
    cin >> arr[i].deadline;
    cout << "Enter profit of job "<<i+1<<" :";
    cin >> arr[i].profit;
    }
	cout << "Following is maximum profit sequence of jobs "<<endl;
   jobSequencing(arr, n);
	return 0;
}