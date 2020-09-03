#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={12,34,44,98,3,33,3};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0,j=n-1;
    while(i<j)
    {
        while(a[j]%2==1 and i<j)
            j--;
        while(a[i]%2==0 and i<j)
            i++;
        if(i<j)
        {
            swap(a[i],a[j]);
            i++,j--;
        }
    }
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}