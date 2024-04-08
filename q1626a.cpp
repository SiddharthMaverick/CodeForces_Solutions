#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        string st;
        cin>>st;
        int arr[26];
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<st.length();i++)
        {
            char ch=st[i];
            arr[ch-'a']=arr[ch-'a']+1;
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==2)
            {
                char b='a'+i;
                cout<<b<<b;
            }
        }
        for(int i=0;i<26;i++)
        {
            if(arr[i]==1)
            {
                char b='a'+i;
                cout<<b;
            }
        }
        cout<<endl;
    }
}