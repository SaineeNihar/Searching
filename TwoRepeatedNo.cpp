#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={3,1,4,5,2,3,1};
    int asize=7;
    int x=0;
    int range=5;
    for(int i=0;i<asize;i++)
        x^=a[i];
    for(int i=1;i<=range;i++)
        x^=i;
    int rightMostBitNo=x &(~(x-1));
    int p=0,q=0;
    for(int i=0;i<asize;i++)
    {
        if(a[i] & rightMostBitNo)
            p^=a[i];
        else
            q^=a[i];
    }
    for(int i=1;i<=range;i++)
    {
        if(i & rightMostBitNo)
            p^=i;
        else 
            q^=i;
    }
    cout<<p<<" "<<q<<endl;
    return 0;
}