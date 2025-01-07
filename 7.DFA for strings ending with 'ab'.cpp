#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    if(s[len-2]=='a' && s[len-1]=='b' )
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    return 0;
}
