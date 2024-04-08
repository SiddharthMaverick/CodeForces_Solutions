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
        if(n>52)
        {
            char ch ='a'+n-53;
            string st="";
            st=st+ch+"zz";
            cout<<st<<endl;
        }
        else
        {
            string st="";
            st=st+'a';
            n=n-1;
            if(n>26)
            {
                char ch='a'+n-27;
                st=st+ch+'z';
            }
            else
            {
                n=n-1;
                char ch='a'+n-1;
                st=st+'a'+ch;
            }
            cout<<st<<endl;
        }
    }
}