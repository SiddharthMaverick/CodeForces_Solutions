#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int r=a%b;
    if(r==0)
    {
        return b;
    }

    return gcd(b,r);
}
int main()
{
    int a,b,n;
    cin>>a>>b>>n;

    int m1,m2;

    while(n!=0)
    {
        m1=gcd(a,n);
        
        if(m1<=n)
        {
            n=n-m1;
        }
        else
        {
            cout<<1<<endl;
            break;
        }
        
        if(n==0)
        {
            cout<<0<<endl;
            break;
        }
        m2=gcd(b,n);

        if(m2<=n)
        {
            n=n-m2;
        }
        else
        {
            cout<<0<<endl;
            break;
        }
        //cout<<n<<"**"<<endl;

        if(n==0)
        {
            cout<<1<<endl;
            break;
        }
    }
    

}