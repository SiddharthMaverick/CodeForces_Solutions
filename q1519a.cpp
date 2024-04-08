#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        long long int r,b,d;
        cin>>r>>b>>d;
        if(r==0|b==0)
        {
            cout<<"NO"<<endl;
        }
        else if(r>=b)
        {
            if(r<=(d+1)*b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
            if(b<=(d+1)*r)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}