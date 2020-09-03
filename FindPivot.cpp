#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={2,3,4};
    int n=3;
    int sum=0;
    for(auto x:a)
        sum+=x;
    int left=0,ans=-1;
    for(int i=0;i<n;i++)
    {
        if(left==sum-a[i]-left)
        {
            ans=i;break;
        }
        else
            left+=a[i];
    }
    cout<<ans<<endl;
    return 0;
}