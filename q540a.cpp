#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    
        string st1,st2;
        cin>>st1;
        cin>>st2;
        for(int i=0;i<st1.length();i++)
        {
            int k=abs(st1[i]-st2[i]);
            int d=min(k,10-k);
            count=count+d;

        }
    cout<<count<<endl;
}