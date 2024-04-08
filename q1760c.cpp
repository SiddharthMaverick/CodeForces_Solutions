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
        int max1;
        int lock1;
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                max1=v[i];
                lock1=i;
            }
            if(v[i]>max1)
            {
                max1=v[i];
                lock1=i;
            }
        }
        int max2=0;
        for(int i=0;i<n;i++)
        {
            if((v[i]>max2)&&(max2<=max1)&&(i!=lock1))
            {
                max2=v[i];
            }
        }
        vector<int>b;
        int k=max1-max2;
        for(int i=0;i<n;i++)
        {
            int c=v[i]-max1;
            if(c==0)
            {
                c=k;
            }
            b.push_back(c);
        }
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;
    }
}