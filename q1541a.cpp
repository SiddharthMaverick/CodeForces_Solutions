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

        vector<int>v;

        for(int i=0;i<n;i++)
        {
            v.push_back(i+1);
        }
        if(n%2==0)
        {
            for(int i=0;i<n;i=i+2)
            {
                int temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            if(n>=3)
            {
                v[0]=3;
                v[1]=1;
                v[2]=2;
            }
            for(int i=3;i<n;i=i+2)
            {
                int temp=v[i];
                v[i]=v[i+1];
                v[i+1]=temp;
            }
            for(int i=0;i<n;i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }
}