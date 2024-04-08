#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;



    for(int ji=1;ji<=t;ji++)
    {
        string st;
        cin>>st;

        int flag=1;

        for(int j=0;j<st.length()-1;j++)
        {
                if((st[j]==st[j+1])||(st[j]=='s' && st[j+1]=='e')||(st[j]=='Y' && st[j+1]=='s')||(st[j]=='e' && st[j+1]=='Y'))
                {
                    flag=0;
                    cout<<"NO"<<endl;
                    break;
                }
                
        }
        


        if(st=="YES")
        {
            
            cout<<"NO"<<endl;
            flag=0;
        }
        
        

        if(flag!=0)
        {
            for(int j=0;j<st.length();j++)
            {
            if(st[j]!='e' && st[j]!='Y' && st[j]!='s')
            {
                flag=0;
            }
            }
            if(flag==0)
            {
                cout<<"NO"<<endl;
                continue;
            }

        if(st=="e"||st=="Y"||st=="s")
        {
            
            cout<<"YES"<<endl;
            flag=1;
        }
        else if(st=="es"||st=="Ye")
        {
            
            cout<<"YES"<<endl;
            flag=1;
        }
        else
        {
            string f1="";
            
            

            for(int j=0;j<st.length();j++)
            {
                char ch=st[j];




                if(f1!="Yes" && f1!="esY" &&  f1!="sYe" )
                {
                    f1=f1+ch;
                }
                else if(f1=="Yes" && f1=="esY" &&  f1=="sYe")
                {
                    
                    flag=1;
                    
                    f1="";
                }

            }
            if(flag==1)
            {
                cout<<"YES"<<endl;
            }
            


        }


        }
    }


}