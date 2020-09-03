#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a{{1,2,3,4,5},
                          {6,7,8,9,10},
                          {11,12,13,14,15},
                          {16,17,18,19,20},
                          {21,22,23,24,25}};
    int x=15;
    int n=5;
    int p=-1,q=-1;
    int i=n-1,j=0;
    while(i>=0 and j<n)
    {
        cout<<i<<" "<<j<<endl;
        if(a[i][j]==x)
        {
            p=i,q=j;
            break;
        }
        else if(a[i][j]<x)
            j++;
        else if(a[i][j]>x)
            i--;
    }
    if(p==-1)
        cout<<"Element not found\n";
    else 
        cout<<endl<<p<<" "<<q<<endl;
    return 0;
}