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
          i++;
        }
        else if(s[i]=='b')
            continue;
        else
        {
            flag=0;
            break;
        }
    }
    if(count==1)
        cout<<"We put wrong alphabets"<<endl;
    else if((flag==1 || s=="") && s[len-1]!='a')
        cout<<"Accepted"<<endl;
    else
        cout<<"Rejected"<<endl;
    }
    return 0;
}
