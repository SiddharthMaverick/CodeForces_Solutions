#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        long long int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            long long int p;
            cin>>p;
            v.push_back(p);
        }

        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+v[i];
        }
        double t=sqrt(sum);
        if(t-floor(t)==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}