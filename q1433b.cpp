#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    
    for(int ji=0;ji<t;ji++)
    {
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int p;
        cin>>p;
        v.push_back(p);
    }

    int pos1=0;
    int j=0;
    while(v[j]!=1)
    {
        j++;
    }
    while(v[j]==1)
    {
        pos1=j;
        j++;
    }
    int pos2=n-1;
    j=n-1;
    while(v[j]!=1)
    {
        j--;
    }
    while(v[j]==1)
    {
        pos2=j;
        j--;
    }

    int count=0;
    for(int i=pos1;i<=pos2;i++)
    {
        if(v[i]==0)
        {
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}