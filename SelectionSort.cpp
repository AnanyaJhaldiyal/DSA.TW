/*-----SELECTION SORT-----
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
    for(int i=0;i<n-1;i++){
        min_index=i;
        for(j=i+1;j<n;j++)
            if(arr[j]<arr[min_index])
                min_index=j;
                swap(arr[min_index],arr[i]); 
}
    cout<<"elements after sorting are:"<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
    return 0;
}