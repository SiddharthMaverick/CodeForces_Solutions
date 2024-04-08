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
        if(n%3==0)
        {
            cout<<(n/3)<<" "<<(n/3)+1<<" "<<(n/3)-1;
        }
        if(n%3==1)
        {
            int k=(n-1)/3;
            cout<<k<<" "<<k+2<<" "<<k-1;
        }
        if(n%3==2)
        {
            int k=(n-2)/3;
            cout<<k+1<<" "<<k+2<<" "<<k-1;
        }
        cout<<endl;
    }
}