#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<long long int>store;
    for(int ji=1;ji<=t;ji++)
    {
        string st;
        cin>>st;
        int l=st.length();
        string pi="3141592653589793238462643383279";
        int c=0;
        for(int i=0;i<l;i++)
        {
            if(pi[i]==(st[i]))
            {
                c++;
            }
            else
            {
                break;
            }
        }
        store.push_back(c);
    }
    for(int i=0;i<store.size();i++)
    {
        cout<<store[i]<<endl;
    }
}