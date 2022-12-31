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
    int fact=1;
    int n;
    cout<<"Enter the number whose factorial you want to obtain: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of " <<n<<" is: "<<fact;
    return 0;
}
