#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string st;
    cin>>st;

    int cz=0,c1=0;

    for(int i=0;i<st.length();i++)
    {
        char ch=st[i];
        if(ch=='z')
        {
            cz++;
        }
        if(ch=='n')
        {
            c1++;
        }
    }
    for(int i=0;i<c1;i++)
    {
        cout<<"1 ";
    }
    for(int i=0;i<cz;i++)
    {
        cout<<"0 ";
    }
    

}