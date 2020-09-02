#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={1,6,-10,70,-80,85};
    int size=sizeof(a)/sizeof(a[0]);
    sort(a,a+size);
    int positive=INT_MAX,negative=INT_MIN,i=0,j=size-1;
    while(i<j)
    {
        int curSum=a[i]+a[j];
        cout<<curSum<<endl;
        if(curSum>0)
        {
            if(curSum<positive)
                positive=curSum;
            j--;
        }  
        else if(curSum<0 )
        {   
            if(curSum>negative)
                negative=curSum;
            i++; 
        }
        else
        {
            cout<<"closest sum "<<curSum<<endl;
        }
    }
    int res=abs(negative)>positive?positive:negative;
    cout<<res<<endl;
    return 0;
}