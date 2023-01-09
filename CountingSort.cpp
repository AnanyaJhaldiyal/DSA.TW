/*-----COUNTING SORT-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[], int n){
  int output[n+1];
  int max=arr[0];
    for(int i=1;i<n;i++){
    if(arr[i]>max)
    max=arr[i];
  }
  int count[max+1];
  for(int i=0;i<=max;i++){
    count[i]=0;
  }
  for(int i=0;i<n;i++){
    count[arr[i]]++;
  }
  for(int i=1;i<=max;i++){
count[i]=count[i]+count[i-1];
  }
  for(int i=n-1;i>=0;i--){
    output[count[arr[i]]-1]=arr[i];
   count[arr[i]]--;
  }
  for(int i=0;i<n;i++){
  arr[i]=output[i];
}
}
int main()
{
    int n;
    int i,j;
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
    countSort(arr,n);
    cout<<"the elements after sorting are: "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
    return 0;
}