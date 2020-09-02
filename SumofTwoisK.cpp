#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={4,3,21,0};
    int size=sizeof(a)/sizeof(a[0]);
    map<int,int> m;
    int sum=6;
    for(int i=0;i<size;i++)
    {
        if(m.find(sum-a[i])!=m.end())
        {
            cout<<"Elementsfound:\t";
            cout<<a[i]<<" "<<sum-a[i];
            break;
        }
        else
            m[a[i]]=i;
    }
    return 0;
}