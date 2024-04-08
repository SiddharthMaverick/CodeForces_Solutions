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
        vector<int>v;

        for(int i=0;i<n;i++)
        {
            if(a[i]%2==1)
            {
                v.push_back(a[i]);
            }
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                v.push_back(a[i]);
            }
        }

        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }
}