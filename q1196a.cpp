#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;

    for(int ji=1;ji<=q;ji++)
    {
        long long int a,b,c;
        cin>>a>>b>>c;

        long long int avg=floor((a+b+c)/2);

        cout<<avg<<endl;
    }
}