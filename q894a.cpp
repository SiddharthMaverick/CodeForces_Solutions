#include<bits/stdc++.h>
using namespace std;
int c=0;
void subseq(string k,int i,int l,string st)
{
    if(st=="QAQ")
    {
        c++;
        return;
    }
    if(st.length()>3)
    {
        return;
    }
    if(i<l)
    {
        string st1=st+k[i];
        string st2=st;
        subseq(k,i+1,l,st1);
        subseq(k,i+1,l,st2);
    }
    }
}
int main()
{
    string st="QAQ";
    string k;
    cin>>k;

    subseq(k,0,k.length(),"");

    cout<<c<<endl;

}