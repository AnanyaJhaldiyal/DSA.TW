/*-----LINEAR SEARCH-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include <iostream>
using namespace std;
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
int j;
for(j=0;j<n;j++){
if(arr[j]==key){
flag=1;
break;
}
else
continue;
}
if(flag==1)
cout<<"key found at "<<j<<" position";
else
cout<<" key is not in the given list of entries";
return 0;
}


