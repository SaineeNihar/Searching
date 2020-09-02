#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int start,int end,int x)
{
    if(start<=end)
    {
        int mid=(start+end)/2;
        if(x==a[mid])
            return mid;
        else if(a[start]<=a[mid])
            if(x<a[mid] and x>=a[start])
                return bs(a,start,mid,x);
            else
                return bs(a,mid+1,end,x);
        else
            if(x>a[mid] and x<=a[end])
                return bs(a,mid+1,end,x);
            else
                return  bs(a,start,mid-1,x);            
    }
}
int main()
{
    int a[]={15,16,19,20,25,1,3,4,5,7,10,14};
    int size=sizeof(a)/sizeof(a[0]);
    int x=16;
    cout<<bs(a,0,size-1,x);
    return 0;
}