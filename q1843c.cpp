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
        long long int sum=0;
        while(n!=0)
        {
            sum=n+sum;
            n=n/2;
        }
        cout<<sum<<endl;
    }
}