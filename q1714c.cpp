#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        int s;
        cin>>s;
        string st="";
        int n=9;
        while(s!=0)
        {
            if((s>9)||(s>n))
            {
                s=s-n;
                st=to_string(n)+st;
                n--;
            }
            else
            {
                
                st=to_string(s)+st;
                s=0;
            }

        }
        cout<<st<<endl;
    }
}