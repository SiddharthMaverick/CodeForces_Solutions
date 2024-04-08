#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int a,b;
        cin>>a>>b;
        int sum=a+b*2+1;
        if(a>=1)
        {
            cout<<sum<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}