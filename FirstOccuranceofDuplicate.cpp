#include<bits/stdc++.h>
using namespace std;
int bsf(int a[],int start,int end,int x)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(mid==start and a[mid]==x || a[mid]==x and a[mid-1]<x)
            return mid;
        else if(a[mid]>=x)
            return bsf(a,start,mid-1,x);
        else
            return bsf(a,mid+1,end,x);
    }
    return -1;
}
int bsl(int a[],int start,int end,int x)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(mid==end and a[mid]==x || a[mid]==x and a[mid+1]>x)
            return mid;
        else if(a[mid]<=x)
            return bsl(a,mid+1,end,x);
        else
            return bsl(a,start,mid-1,x);
    }
    return -1;
}
int main()
{
    int a[]={2,3,4,6,6,6,6,7,9,11,11};
    int size=sizeof(a)/sizeof(a[0]);
    int x=6;
    cout<<bsf(a,0,size-1,x)<<endl;
    cout<<bsl(a,0,size-1,x)<<endl;
    cout<<bsl(a,0,size-1,x)-bsf(a,0,size-1,x)+1<<endl;
    return 0;
}