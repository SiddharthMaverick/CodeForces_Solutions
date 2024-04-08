#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b==c)||(a+c==b)||(b+c==a))
        {
            cout<<"YES"<<endl;
        }
        else if(((a==b)&(c%2==0))||((c==b)&(a%2==0))||((a==c)&(b%2==0)))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}