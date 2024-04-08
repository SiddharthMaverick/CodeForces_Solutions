#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>b(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>b[i];
    }
    vector<int>c(n-2);
    for(int i=0;i<n-2;i++)
    {
        cin>>c[i];
    }

    map<int,int>mp1;
    map<int,int>mp2;
    map<int,int>mp3;

    for(int i=0;i<n;i++)
    {
        mp1[a[i]]++;
    }
    for(int i=0;i<n-1;i++)
    {
        mp2[b[i]]++;
    }
    for(int i=0;i<n-2;i++)
    {
        mp3[c[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(mp1[a[i]]!=mp2[a[i]])
        {
            cout<<a[i]<<endl;
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(mp2[a[i]]!=mp3[a[i]])
        {
            cout<<a[i]<<endl;
            break;
        }
    }


}