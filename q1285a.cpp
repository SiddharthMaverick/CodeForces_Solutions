#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;

    int lc=0;
    int lr=0;
    for(int i=0;i<st.length();i++)
    {
        if(st[i]=='L')
        {
            lc++;
        }
        if(st[i]=='R')
        {
            lr++;
        }
    }
    cout<<lc+lr+1<<endl;
}