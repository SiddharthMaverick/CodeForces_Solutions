#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int f=min(a,min(c,d));

    int y=min(a-f,b);
    

    int sum=0;
    if(y>=0)
    {
        sum=f*256+y*32;
    }
    else
    {
        sum=f*256;
    }
    
    cout<<sum<<endl;
}