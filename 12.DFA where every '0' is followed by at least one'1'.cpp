#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='0' && s[i+1]!='1')
        {
            cout<<"Rejected"<<endl;
            return 0;
        }
    }
    cout<<"Accepted"<<endl;
    return 0;
}
