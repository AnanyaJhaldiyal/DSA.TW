/*-----BINARY SEARCH-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include <iostream>
using namespace std;
int BinarySearch(int arr[],int left,int right, int key){
    if(left<=right){
    int m= left+(right-left)/2;
    if(key==arr[m]){
        return m;}
    if(arr[m]>key)
        return BinarySearch(arr, left,m-1,key);
    if(arr[m]<key)
        return BinarySearch(arr, m+1,right,key);
    }
    return -1;
    }

int main(){
int n;
int flag=0;
cout<<"Enter the number of entries:\n";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter the "<<i+1<<" entry:";
    cin>>arr[i];
}
int key;
cout<<"enter the number to be searched:";
cin>>key;
int ans=BinarySearch(arr, 0,n-1,key);
if(ans==-1)
    cout<<"the number you are searching for is not present";
else
cout<<"the number to be searched is at position: "<<ans;
return 0;
}
