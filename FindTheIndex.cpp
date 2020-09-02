#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int start,int end)
{
    if(start>end)
        return -1;
    int mid=(start+end)/2;
    if(a[mid]==1 and a[mid+1]==0)
        return mid+1;
    else if(a[mid]==1 and a[mid+1]==1)
        return bs(a,mid,end*2);
    else if(a[mid]==0 and a[mid+1]==0)
        return  bs(a,start,mid);
}
int main()
{
    int a[]={1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0};
    //int n=sizeof(a)/sizeof(a[0]);
    cout<<bs(a,0,1);
    return 0;
}