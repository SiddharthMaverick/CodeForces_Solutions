#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        long long int a,b,k;
        cin>>a>>b>>k;

        long long int sum=0;
        long long int n=k/2;
        long long int d=k%2;
        if(k>0)
        {
            if(d==0)
            {
                sum=n*(a-b);
            }
            else
            {
                sum=n*(a-b)+a;
            }
        }
        else
        {
            sum=0;
        }
        cout<<sum<<endl;
    }
}