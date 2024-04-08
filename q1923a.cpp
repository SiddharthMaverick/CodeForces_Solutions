#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    int pos1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            c=1;
        }
        if(c==1 && a[i]==1)
        {
            pos1=i;
        }
        if(c==1 && a[i]==0)
        {
            break;
        }
    }
    int pos2=n-1;
    c=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==1)
        {
            c=1;
        }
        if(c==1 && a[i]==1)
        {
            pos2=i;
        }
        if(c==1 && a[i]==0)
        {
            break;
        }
    }
    c=0;
    for(int i=pos1;i<=pos2;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    }
}