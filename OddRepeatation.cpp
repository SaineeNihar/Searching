#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,2,1,2,3,1,3};
    int x=0;
    for(int i=0;i<7;i++)
        x^=a[i];
    cout<<x;
    return 0;
}