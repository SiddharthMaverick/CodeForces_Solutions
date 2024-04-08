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

        double dif=abs(a-b);
        double m=dif/2;
        cout<<ceil(m/c)<<endl;
    }
}