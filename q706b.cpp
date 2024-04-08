#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    vector<int>x(n);
    int max1=0;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i]>max1)
        {
            max1=x[i];
        }
    }

    int q;
    cin>>q;

    vector<int>pri(max1+1);
    vector<int>m(q);
    for(int i=0;i<q;i++)
    {
        cin>>m[i];
    }

    
    for(int i=0;i<max1+1;i++)
    {
        pri[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        pri[x[i]]++;
    }

    int c=0;

    for(int i=0;i<max1+1;i++)
    {
        if(pri[i]>0)
        {
            c=c+pri[i];
        }
        pri[i]=c;
    }
    for(int i=0;i<q;i++)
    {
        if(m[i]<max1)
        {
            cout<<pri[m[i]]<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }

    



}