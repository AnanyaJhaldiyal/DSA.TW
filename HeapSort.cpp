/*-----HEAP SORT-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[], int n, int i){
    int lar=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[left]>arr[lar]){
        lar=left;
    }
        if(right<n && arr[right]>arr[lar]){
        lar=right;
    }
    if(lar!=i){
        swap(arr[i],arr[lar]);
        heapify(arr,n,lar);
    }
    
}
void HeapSort(int arr[], int n){
    for(int i=n/2-1;i>=0;i--)
    heapify(arr,n,i);
   for(int i=n-1;i>=0;i--){
   swap(arr[0],arr[i]);
   heapify(arr,i,0);
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
    HeapSort(arr,n);
    cout<<"the elements after sorting are: "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
    return 0;
}