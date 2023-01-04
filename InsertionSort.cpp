/*-----INSERTION SORT-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int i,j,min_index;
    cout<<"enter the limit: ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the elements before sorting are: "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
       int t=arr[i];
       j=i-1;
       while(j>=0&&arr[j]>t){
        arr[j+1]=arr[j];
        j--;
       }
       arr[j+1]=t;
}
    cout<<"elements after sorting are:"<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
    return 0;
}