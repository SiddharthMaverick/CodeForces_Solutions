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

        vector<int>v(n);

        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int cu=0;
        int cd=0;
        int ct=0;
        for(int i=0;i<n;i++)
        {
            if(1==v[i])
            {
                cu++;
            }
            else if(2==v[i])
            {
                cd++;
            }
            else
            {
                ct++;
            }
        }
        cout<<ct+cu<<endl;

    }
}