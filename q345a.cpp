#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,a;
    cin>>l>>r>>a;
    int min1=min(l,r);
    int max1=max(l,r);
    int diff=max1-min1;
    if(diff<=a)
    {
        a=a-diff;
        int rt=a/2;
        int sum=l+r+diff+rt*2;
        cout<<sum<<endl;
    }
    else
    {
        cout<<(min1+a)*2<<endl;
    }
}