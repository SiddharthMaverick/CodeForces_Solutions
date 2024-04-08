#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    string st;
    cin>>st;
    int k=1;
    string st1="";

    for(int i=0;i<n;i=i+k)
    {
        st1=st1+st[i];
        k++;
    }
    cout<<st1<<endl;
}