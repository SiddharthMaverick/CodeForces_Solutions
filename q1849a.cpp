#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int b,c,h;
        cin>>b>>c>>h;

        int x=2*(c+h)+1;
        int y=2*b-1;

        cout<<min(x,y)<<endl;

    }
}