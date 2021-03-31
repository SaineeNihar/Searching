#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string lcs(string a,string b)
{
    int l[a.length()+1][b.length()+1];
    
    for(int i=0;i<=a.length();i++)
    {
        for(int j=0;j<=b.length();j++)
        {
            if(i==0 or j==0)
                l[i][j]=0;
            else if(a[i-1]==b[j-1])
                l[i][j]=l[i-1][j-1]+1;
            else 
                l[i][j]=max(l[i-1][j],l[i][j-1]);
        }
    }
    int index=l[a.length()][b.length()];
    int i=a.length(),j=b.length();
    char ans[index+1];
    ans[index]='\0';
    while(i>0 and j>0)
    {
        if(a[i-1]==b[j-1])
        {
            ans[index-1]=a[i-1];
            i--,j--,index--;
        }
        else if(l[i-1][j]>l[i][j-1])
            i--;
        else 
            j--;
    }
    return ans;
}
string findWord(string s,set<string> dict)
{
    string ans="",tmp;
    for(auto  i=dict.begin();i!=dict.end();i++)
    {
        tmp=lcs(s,*i);
        if(tmp.length()>ans.length())
            ans=tmp;
    }
    return ans;
}
int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    set<string>dict;
	    for(int i=0;i<x;i++)
	    {
	        string s;
	        cin>>s;
	        dict.insert(s);
	    }
	    string s;
	    cin>>s;
	    cout<<findWord(s,dict)<<endl;
	}
	return 0;
}