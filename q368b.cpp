#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mp;
    int c=0;
    int re[n+1];
    for(int i=n-1;i>=0;i--)
    {
        if(mp[arr[i]]==0)
        {
            mp[arr[i]]++;
            c++;
        }

        re[i+1]=c;

    }

    for(int i=0;i<m;i++)
    {
        int k;
        cin>>k;
        cout<<re[k]<<endl;
    }





}