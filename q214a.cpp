#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    
    int count=0;

    for(int i=0;i<=n;i++)
    {
        if(sqrt(n-i)+i*i==m)
        {
            count++;
        }
    }
    cout<<count;


}