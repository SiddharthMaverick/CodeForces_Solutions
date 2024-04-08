#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    for(int ji=1;ji<=t;ji++)
    {
        int arr[26];
        for(int i=0;i<26;i++)
        {
            arr[i]=0;
        }
        int n;
        cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string st;
            cin>>st;
            for(int j=0;j<st.length();j++)
            {
                arr[st[j]-'a']++;
            }
        }


        int flag=0;
        for(int i=0;i<26;i++)
        {
            if(arr[i]%n!=0)
            {
                flag++;
                break;
            }
        }

        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}