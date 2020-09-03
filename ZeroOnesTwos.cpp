#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[]={0,1,1,0,1,2,1,2,0,0,0,1};
    int n=sizeof(a)/sizeof(a[0]);
    int i=0,j=n-1,mid=0;
    while(mid<=j)
    {
        switch (a[mid])
        {
        case 0:
            swap(a[i],a[mid]);
            i++, mid++;
            break;
        case 1:
            mid++;
            break;
        case 2:
            swap(a[j],a[mid]);
            j--;
            break;
        default:
            break;
        }
    }
    for(auto x:a)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}