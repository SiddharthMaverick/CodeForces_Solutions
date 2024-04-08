#include<bits/stdc++.h>
using namespace std;
int sum(int p)
{
    int sum1=0;
    while(p>0)
    {
        int d=p%10;
        sum1=sum1+d;
        p=p/10;
    }
    return sum1;
}
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int x,k;
        cin>>x>>k;

        int r=x;
        while(sum(r)%k!=0)
        {
            r++;
        }
        cout<<r<<endl;
    }
}