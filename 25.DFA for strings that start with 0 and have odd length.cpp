#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count=0;
    int len=s.length();
    if(s[0]=='0' && len%2==1)
      cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    return 0;
}
