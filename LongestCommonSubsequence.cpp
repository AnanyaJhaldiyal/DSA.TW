/*-----LONGEST COMMON SUBSEQUENCE-----
NAME: ANANYA JHALDIYAL
SECTION: CST-SPL-1
UNIVERSITy ROLL NUMBER:2017460
CLASS ROLL NUMBER:54
*/
#include <bits/stdc++.h>
#include<cstring>
using namespace std;
int max(int a, int b);
int lcs(char* x, char* y, int len1, int len2)
{
    int L[len1 + 1][len2 + 1];
    int i, j;
    for (i = 0; i <= len1; i++) {
         for (j = 0; j <= len2; j++) {
            if (i == 0 || j == 0)
                L[i][j] = 0;
             else if (x[i - 1] == y[j - 1])
                L[i][j] = L[i - 1][j - 1] + 1;
                 else
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
         }
    }
    return L[len1][len2];
}
int max(int a, int b)
{
    if(a>b)
    return a;
    else
    return b;
}
int main()
{
    char x[200],y[200];
    cout<<"enter a string: ";
    //cin>>x;
    gets(x);
    cout<<"enter a substring: ";
    gets(y);
    int len1 = strlen(x);
    int len2 = strlen(y);
    printf("Length of Longest common subsequence is: %d\n", lcs(x, y, len1, len2));
    return 0;
}