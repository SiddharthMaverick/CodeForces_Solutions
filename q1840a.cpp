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
        string s;
        cin>>s;
        string ki="";
        for(int i=0;i<n;i++)
        {
            char ch=s[i];
            int k=i+1;
            while(s[k]!=ch)
            {
                k++;
            }
            ki=ki+s[k];
            i=k;
        }
        cout<<ki<<endl;
   }
}