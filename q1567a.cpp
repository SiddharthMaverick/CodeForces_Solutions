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
        string form2="";
        for(int i=0;i<n;i++)
        {
            if(st[i]=='U')
            {
                form2=form2+"D";
            }
            else if(st[i]=='D')
            {
                form2=form2+"U";
            }
            else
            {
                form2=form2+st[i];
            }
        }
        cout<<form2<<endl;
    }
}