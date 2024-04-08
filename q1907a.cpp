#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        string b;
        cin>>b;


        for(int i=1;i<9;i++)
        {
            if(i!=b[1]-'0')
            {
                cout<<b[0]+to_string(i)<<endl;
            }
        }
        for(char ch='a';ch<='h';ch++)
        {
            if(ch!=b[0])
            {
                cout<<ch<<b[1]<<endl;
            }
        }
    }
}