#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> a{{1,1,1,0,0},
                          {1,1,1,1,1},
                          {1,1,1,0,0},
                          {1,1,1,1,0},
                          {1,1,0,0,0}};
    int n=5;
    int p=-1,q=-1;
    int i=0,j=n-1;
    while(i<n and j>=0)
    {
        cout<<i<<" "<<j<<endl;
        if(a[i][j]==0)
        {
            p=i,q=j;
            j--;
        }
        else 
            i++;
    }   
    cout<<endl<<p<<"th row has maximum zeros "<<n-q<<endl;
    return 0;
}