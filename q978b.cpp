#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        string st;
        cin>>st;
        st=st+".";
        int c=0;
        int store=0;
        for(int i=0;i<n+1;i++)
        {
            if(st[i]=='x')
            {
                c++;
            }
            else if(c>=3)
            {
                store=store+c-2;
                c=0;
            }
            else
            {
                c=0;
            }
        }
        cout<<store<<endl;
}