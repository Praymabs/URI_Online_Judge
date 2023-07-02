#include<iostream>
using namespace std;
int main()
{
    long long i,q;
    string s;
    while(cin>>q)
    {
        if(q==0)
        {cout<<"10"<<endl;  continue;}
        if(q==1)
        {cout<<"1"<<endl;  continue;}

        s="";
        for(i=9;i>1;i--)
        {
            if(q>=i && q%i==0)
            {
                q/=i;
                s+=i+'0';
                i=10;
            }
        }
        if(q==1)
        {
            for(i=s.length()-1;i>=0;i--)
            cout<<s[i];
            cout<<endl;
        }
        else
        cout<<"-1"<<endl;
    }
}
