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
        if(s[i]=='0'||s[i]=='1')
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
        if(s[i]=='0' && s[i+1]=='1')
        {
          flag=1;
          i++;
        }
        else if(s[i]=='1')
            continue;
        else
        {
            flag=0;
            break;
        }
    }
    if(count==1)
        cout<<"We put wrong alphabets"<<endl;
    else if((flag==1 || s=="") && s[len-1]!='0')
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    }
    return 0;
}
