/*-----TOWER OF HANOI-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
using namespace std;
void towerofhanoi(int n, char a, char b, char c){
    if(n==0)
    return;
    towerofhanoi(n-1, a,c,b);
    cout<<"move "<<n<<" from rod "<<a<< " to rod "<<b<<endl;
    towerofhanoi(n-1, c,b,a);
}
int main(){
    int n;
    cout<<"enter the number of disks:\n";
    cin>>n;
    cout<<"the names of rods are A, B AND C"<<endl;
    cout<<"FROM ROD: A TO TARGET ROD: C"<<endl;
    cout<<"\n";
    cout<<"\n";

    towerofhanoi( n,'A','C','B');
    return 0;
}