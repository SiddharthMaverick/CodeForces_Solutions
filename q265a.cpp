#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;
    int k=0;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]==s[k])
        {
            k++;
        }
    }
    cout<<k+1<<endl;

}