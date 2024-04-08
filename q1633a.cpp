#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int ji=1;ji<=t;ji++)
    {
        string n;
        cin>>n;
        if(stoi(n)%7==0)
        {
            cout<<n<<endl;
        }
        else
        {
            for(char i='1';i<='9';i++)
            {
                n[n.length()-1]=i;
                if(stoi(n)%7==0)
                {
                    cout<<n<<endl;
                    break;
                }
            }
        }
    }
}