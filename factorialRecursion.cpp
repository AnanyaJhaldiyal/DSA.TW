/*-----FACTORIAL USING RECURSION-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITY ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1); 
    }
int main()
{
    int n;
    cout<<"Enter the number whose factorial you want to obtain: ";
    cin>>n;
    int res=fact(n);
    cout<<"The factorial of " <<n<<" is: "<<res;
    return 0;
}