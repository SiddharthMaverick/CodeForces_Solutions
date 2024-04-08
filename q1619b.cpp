#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        double n;
        cin>>n;
        long long int a,b,c;
        a=sqrt(n);
        b=cbrt(n);
        c=sqrt(cbrt(n));

        double f=a+b-c;
        cout<<f<<endl;
    }
}