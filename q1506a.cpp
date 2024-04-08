#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        long long int m,n,x;
        cin>>n>>m>>x;
        x=x-1;
        long long int c1=x/(n);
        long long int r1=x%(n);

        long long int y=(r1*m)+c1+1;
        cout<<y<<endl;
    }
}