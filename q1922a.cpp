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


        string a,b,c;
        cin>>a>>b>>c;

        int flag=0;
        vector<int>v;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==b[i])
            {
                v.push_back(1);
                sum=sum+1;
            }
            else
            {
                v.push_back(0);
            }

        }
        
        for(int i=0;i<n;i++)
        {
            if(v[i]==1 &&( a[i]==c[i] || b[i]==c[i]))
            {
                v[i]=0;
            }
            else if(v[i]==0 && a[i]!=c[i] && b[i]!=c[i])
            {
                v[i]=1;
            }
        }

        int sumi=0;

        for(int i=0;i<n;i++)
        {
            sumi=sumi+v[i];
        }

        if(sumi>0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
}