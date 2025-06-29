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
    int len=s.length();
    for(i=0;i<len;i++)
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
    for(i=0;i<len-3;i++)
    {
       if(s[i]=='b' && s[i+1]=='a' && s[i+2]=='b' && s[i+3]=='a')
       {
        flag=1;
        break;
       }
    }
    if(count==1)
        cout<<"We put wrong alphabets"<<endl;
    else if(flag==1 && len>=2)
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    }
    return 0;
}
