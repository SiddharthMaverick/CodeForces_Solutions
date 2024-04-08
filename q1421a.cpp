#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int a,b;
        cin>>a>>b;

        int c=(~a)^(b);

        cout<<abs(c)-1<<endl;
    }
}