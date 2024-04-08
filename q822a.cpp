#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int min1=min(a,b);
    int fact=1;
    if(min1==0)
    {
        cout<<1<<endl;
    }
    else
    {
    while(min1>1)
    {
        fact=fact*min1;
        min1--;
    }
    cout<<fact<<endl;
    }
}