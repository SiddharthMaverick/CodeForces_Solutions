#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int ans=0;
    int q=0;
    int a=0;
    for(int i=0;i<=st.size()-1;i++)
    {
        if(st[i]=='Q')
        {
            ans+=a;
            q++;
        }
        else if(st[i]=='A')
        {
            a+=q;
        }
    }
    cout << ans << endl;
}