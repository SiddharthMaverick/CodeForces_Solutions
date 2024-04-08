#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        string st1,st2;

        cin>>st1;
        cin>>st2;

        string st3=st1+st2;

        int c=0;
        for(char ch='a';ch<='z';ch++)
        {
            int flag=0;
            for(int i=0;i<st3.length();i++)
            {
                if(ch==st3[i])
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                c++;
            }
        }
        cout<<c-1<<endl;

    }
}