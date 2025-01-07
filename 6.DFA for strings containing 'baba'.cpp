#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length()-3;i++)
    {
       if(s[i]=='b' && s[i+1]=='a' && s[i+2]=='b' && s[i+3]=='a')
       {
        cout<<"Accepted"<<endl;
        return 0;
       }
    }
    cout<<"Rejected"<<endl;
    return 0;
}
