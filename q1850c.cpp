#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>v;
    for(int i=1;i<=t;i++)
    {
        string st="";
        for(int j=0;j<8;j++)
        {
            for(int y=0;y<8;y++)
            {
                char ch;
                cin>>ch;
                if(ch!='.')
                {
                    st=st+ch;
                }
            }
        }
        v.push_back(st);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}