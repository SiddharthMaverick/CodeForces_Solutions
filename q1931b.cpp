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
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;
            sum=sum+p;
            v.push_back(p);
        }
        int sum1=0;
        int flag=0;
        for(int i=n-1;i>=1;i--)
        {
            sum1=sum1+v[i];
            double avg=sum/n;
            double avg1=sum1/(n-i);
            double avg2=(sum-sum1)/i;
            if(avg<avg1)
            {
                flag=1;
            }

        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }

        

    }
}