#include<bits/stdc++.h>
using namespace std;
int distance_find(string st,string rt,int le)
{
    int sum=0;
    for(int i=0;i<le;i++)
    {
        sum=sum+abs(st[i]-rt[i]);
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;

    vector<int>space;

    for(int ji=1;ji<=t;ji++)
    {
        int n,m;
        cin>>n>>m;

        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string st;
            cin>>st;
            v.push_back(st);
        }

        int min=distance_find(v[0],v[1],m);
        
        for(int j=0;j<v.size();j++)
        {
            for(int i=0;i<v.size();i++)
            {
                if(i!=j)
                {
                    int d=distance_find(v[i],v[j],m);
                    if(d<min)
                    {
                        min=d;
                    }

                }
            }
        }
        space.push_back(min);


    }


    for(int i=0;i<space.size();i++)
    {
        cout<<space[i]<<endl;
    }


}