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
            int p;
            cin>>p;
            v.push_back(p);
        }

        int c1=0,c2=0,c11=v[0],c22=v[n-1];
        for(int i=0;i<n;i++)
        {
            if(v[i]==c11)
            {
                c1++;
            }
            else
            {
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==c22)
            {
                c2++;
            }
            else
            {
                break;
            }
        }
        if(n==1 || n==c1||n==c2)
        {
            cout<<0<<endl;
        }
        else
        {
        if(c11==c22)
        {
            cout<<n-c1-c2<<endl;
        }
        else
        {
            cout<<n-max(c1,c2)<<endl;
        }

        }

    }
}