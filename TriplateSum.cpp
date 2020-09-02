#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={5,347,23,-4,12,65,45,-1,67,2,17,22};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int x=sum-a[i];
        int j=i+1,k=n-1;
        while(j<k)
        {
            if(a[j]+a[k]==x)
            {
                cout<<"Triplate are "<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                return 0;
            }
            else if(a[j]+a[k]<x)
                j++;
            else
                k--;
        }
    }
    cout<<"No Triplate found\n";
    return 0;
}