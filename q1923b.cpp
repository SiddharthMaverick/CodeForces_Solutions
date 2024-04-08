#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    for(long long int ji=1;ji<=t;ji++)
    {
        long long int n,k;
        cin>>n>>k;

        vector<long long int>a(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        vector<long long int>x(n);
        for(long long int i=0;i<n;i++)
        {
            cin>>x[i];
        }

        long long int sum=0;
        map<long long int,long long int>m;

        for(long long int i=0;i<n;i++)
        {
            m[abs(x[i])]+=a[i];
        }


        long long int max=0;
        for(long long int i=0;i<n;i++)
        {
            if(abs(x[i])>max)
            {
                max=abs(x[i]);
            }
        }
        long long int totalb=0;
        long long int flag=0;
        for(int i=0;i<=max;i++)
        {
            sum+=m[i];
            totalb=k*(i);
            
            if(sum>totalb)
            {
                flag=1;
                break;
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