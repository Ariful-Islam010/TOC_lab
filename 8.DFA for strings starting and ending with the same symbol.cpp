#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    if(s[0]==s[len-1])
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    return 0;
}
