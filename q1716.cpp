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
        if(n==1)
        {
            cout<<2<<endl;
        }
        else if(n%3==0)
        {
            cout<<n/3<<endl;
        }
        else
        {
            cout<<(n/3)+1<<endl;
        }

    }
}