#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
    int n;
    cin>>n;

    string st;
    cin>>st;

    int a=0,b=0,c=0,d=0;
    int i=0;
    while(st[i]=='M' || st[i]=='m')
    {
        a=1;
        i++;
    }
    while(st[i]=='E' || st[i]=='e')
    {
        b=1;
        i++;
    }
    while(st[i]=='O' || st[i]=='o')
    {
        c=1;
        i++;
    }
    while(st[i]=='W' || st[i]=='w')
    {
        d=1;
        i++;
    }


    if(a+b+c+d==4 && i==n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    }
}