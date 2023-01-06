/*-----MERGE SORT-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;      
//                        p        q        r
void merge(int arr[],int left, int m, int right){
int n = m- left + 1;
  int m1 = right - m;
  int L[n], M[m1];
  for (int i = 0; i < n; i++)
    L[i] = arr[left + i];
  for (int j = 0; j < m1; j++)
    M[j] = arr[m + 1 + j];
  int i=0; int j=0;
  int k = left;
  while (i < n && j < m1) {
    if (L[i] <= M[j]) {
      arr[k] = L[i];
      i++;
    } 
    else {
      arr[k] = M[j];
      j++;
    }
    k++;
  }
  while (i < n) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < m1) {
    arr[k] = M[j];
    j++;
    k++;
  }
}
void mergesort(int arr[],int left,int right){
    if(left<right){
        int m=left+(right-left)/2;
        mergesort(arr,left,m);
        mergesort(arr,m+1,right);
        merge(arr,left,m,right);
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
    mergesort(arr,0,n-1);
    cout<<"the elements after sorting are: "<<endl;
    for(int i=0;i<n;i++){
      cout<<arr[i]<<",";
    }
    return 0;
}