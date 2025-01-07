#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len=s.length();
    //Ends with '0'
    if(s[len-1]=='0')
      cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    return 0;
}
