#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=0;ji<t;ji++)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int k=(a==b)?c:(a==c)?b:a;
        cout<<k<<endl;
    }
}