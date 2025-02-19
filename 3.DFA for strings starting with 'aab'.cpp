#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,count=0;
    while(1)
    {
        cout<<"Enter the string : ";
        cin>>s;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            if(s[i]=='a'||s[i]=='b')
             continue;
            else
            {
             count=1;
             break;
            }
        }
     if(count==1)
        cout<<"You put wrong Alphabet."<<endl;
     else if(s[0]=='a' && s[1]=='a' && s[2]=='b')
        cout<<"Accepted"<<endl;
     else
        cout<<"Rejected"<<endl;
    }
}

