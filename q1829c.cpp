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

        vector<pair<int,string>>v(n);

        for(int i=0;i<n;i++)
        {
            int p;
            cin>>p;

            string st;
            cin>>st;

            v[i]=make_pair(p,st);
        }

        int fmin=numeric_limits<int>::max();
        int smin=numeric_limits<int>::max();

        int p1=0,p2=0;
        int posi1=0;
        int posi2=0;

        for(int i=0;i<n;i++)
        {
            if(v[i].second[0]=='1' && v[i].first<fmin)
            {
                fmin=v[i].first;
                posi1=i;
                p1=1;
            }
            if(v[i].second[1]=='1' && v[i].first<smin)
            {
                smin=v[i].first;
                posi2=i;
                p2=1;
            }
            
        }


        int rmin=fmin+smin;
        int r1=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].second[0]=='1' && v[i].second[1]=='1' && v[i].first<rmin)
            {
                rmin=v[i].first;
                r1=1;
            }
        }



        if(p1==1 && p2==1 || r1==1)
        {
            if(r1==1)
            {
                cout<<rmin<<endl;
            }
            else
            {
                cout<<fmin+smin<<endl;
            }
        }
        else
        {
            cout<<-1<<endl;
        }

    }
}