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
        double sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            sum=sum+v[i];
        }
        double avg=(sum*1.0)/n;
        double t=ceil(avg);
        long long y=t;
        cout<<y<<endl;

    }
}