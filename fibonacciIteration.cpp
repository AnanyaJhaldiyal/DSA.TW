/*-----FACTORIAL USING ITERATION-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the limit of the fibonacci series: ";
    cin>>n;
    cout<<"series is: "<<endl;
    int a,b,c;
    a=0;b=1;
    cout<<a<<",";
    cout<<b<<",";
    for(int i=0;i<n-1;i++)
    {
    c=a+b;
    a=b;
    b=c;
    cout<<c<<",";
    }
    return 0;
}