#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        string st1;
        cin>>st1;
        string st2;
        cin>>st2;

        int x1=0,x2=0;
        for(int i=0;i<st1.length();i++)
        {
            if(st1[i]=='X')
            {
                x1++;
            }
        }

        for(int i=0;i<st2.length();i++)
        {
            if(st2[i]=='X')
            {
                x2++;
            }
        }

        if((st2[st2.length()-1]==st1[st1.length()-1])&&(st2[st2.length()-1]=='L'))
        {
            if(x1>x2)
            {
                cout<<">"<<endl;
            }
            else if(x1<x2)
            {
                cout<<"<"<<endl;
            }
            else if(x1==x2)
            {
                cout<<"="<<endl;
            }
        }
        else if((st2[st2.length()-1]==st1[st1.length()-1])&&(st2[st2.length()-1]=='S'))
        {
            if(x1>x2)
            {
                cout<<"<"<<endl;
            }
            else if(x1<x2)
            {
                cout<<">"<<endl;
            }
            else if(x1==x2)
            {
                cout<<"="<<endl;
            }
        }
        else if((st2[st2.length()-1]==st1[st1.length()-1])&&(st2[st2.length()-1]=='M'))
        {
            cout<<"="<<endl;
        }
        else
        {
            if(st1[st1.length()-1]=='L')
            {
                cout<<">"<<endl;
            }
            else if((st1[st1.length()-1]=='M')&&(st2[st2.length()-1]=='S'))
            {
                cout<<">"<<endl;
            }
            else
            {
                cout<<"<"<<endl;
            }
        }

    }
}