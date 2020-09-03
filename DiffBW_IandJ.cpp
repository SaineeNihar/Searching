#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int a[]={34,8,10,3,2,80,30,33,1};
    int n=sizeof(a)/sizeof(a[0]);
    vector<int>lmin(n,-1);
    vector<int>rmax(n,-1);
    lmin[0]=a[0];rmax[n-1]=a[n-1];
    for(int i=1;i<n;i++)
        lmin[i]=min(a[i],lmin[i-1]);
    for(int i=n-2;i>=0;i--)
        rmax[i]=max(a[i],rmax[i+1]);

    for(int i=0;i<n;i++)
    {
        cout<<lmin[i]<<"    "<<rmax[i]<<endl;

    }
    cout<<"loop\n";
    int i=0,j=0,maxDiff=-1;
    while(i<n and j<n)
    {
        if(lmin[i]<rmax[j])
        {
            cout<<lmin[i]<<"    "<<rmax[j]<<endl;
            maxDiff=max(maxDiff,j-i);
            j++;
        }
        else 
            i++;
    }
    cout<<maxDiff<<endl;
    return 0;
}