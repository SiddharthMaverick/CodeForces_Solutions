#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;

    int len=st.length();

    vector<int>v(len+1);
    int c=0;
    for(int i=0;i<len-1;i++)
    {
        if(st[i]==st[i+1])
        {
            c++;
        }
        v[i+2]=c;
    }
    int q;
    cin>>q;

    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        cout<<v[b]-v[a]<<endl;
    }

}