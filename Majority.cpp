#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={6,5,2,2,4,3,5,2,1,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int count=0,element=-1;
    for(int i=0;i<size;i++)
    {
        if(count==0)
        {
            element=a[i];count=1;
        }
        else if(a[i]==element)
            count++;
        else
        {
            count--;
        }
    }
    cout<<element<<endl;
    return 0;


}