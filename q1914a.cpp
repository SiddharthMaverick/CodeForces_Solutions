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

        int ch1[26];
        for(int i=0;i<26;i++)
        {
            ch1[i]=0;
        }

        for(char ch='A';ch<='Z';ch++)
        {
            for(int j=0;j<st.length();j++)
            {
                if(st[j]==ch)
                {
                    ch1[ch-'A']++;
                }
            }
        }

        long long int  c=0;
        char a='A';
        for(int i=0;i<26;i++)
        {
            if(ch1[i]>=i+1)
            {
                c++;
            }
        }
        cout<<c<<endl;


    }
}