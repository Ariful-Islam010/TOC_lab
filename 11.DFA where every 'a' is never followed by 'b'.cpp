#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(1)
    {
    cout<<"Enter the string : ";
    getline(cin,s);
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
    for(i=0;i<len-1;i++)
    {
        if(s[i]=='a' && s[i+1]=='b')
        {
          flag=1;
          break;
        }
        else
            continue;
    }
    if(count==1)
        cout<<"We put wrong alphabets"<<endl;
    else if(flag==0||s=="")
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    }
    return 0;
}
