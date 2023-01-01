/*-----FACTORIAL USING RECURSION-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
using namespace std;
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2); 
    }
int main()
{
    int n;
    cout<<"Enter the limit of the fibonacci series: ";
    cin>>n;
    cout<<"series is: "<<endl;
    for(int i=0;i<n;i++)
    cout<<fib(i)<<",";
    return 0;
}