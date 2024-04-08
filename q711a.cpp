#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int point=0;
    vector<string>v;
    for(int i=0;i<n;i++)
    {
        string st;
        cin>>st;
        for(int j=0;j<st.length()-1;j++)
        {
            if(((st[j]=='O')&&(st[j+1]=='O'))&&(point!=1))
            {
                st[j]='+';
                st[j+1]='+';
                point=1;
            }
        }
        v.push_back(st);
    }
    if(point==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<v.size();i++)
        {
            cout<<v[i]<<endl;
        }
    }
}