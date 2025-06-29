#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(1)
    {
    cout<<"Enter the string : ";
    cin>>s;
    int i,count=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='b')
            continue;
        else
        {
           count=1;
           break;
        }
    }
    int flag=0;
    for(i=0;i<s.length()-1;i++)
    {
       if(s[i]=='a' && s[i+1]=='b')
       {
        flag=1;
        break;
       }
    }
    if(count==1)
        cout<<"We put wrong alphabets"<<endl;
    else if(flag==1)
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    }
    return 0;
}
