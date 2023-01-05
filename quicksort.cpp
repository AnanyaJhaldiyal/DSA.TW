/*-----QUICK SORT-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high){
    int i=low-1;
    int pivot;
    pivot=arr[high];
    for(int j=low;j<=high-1;j++){
           if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
           }
    }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
void quicksort(int arr[],int low,int high){
    if(high>low){
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}
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
    quicksort(arr,0,n-1);
    cout<<"the elements after sorting are: "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
return 0;
}