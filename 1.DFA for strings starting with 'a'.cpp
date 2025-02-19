#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,count;
    while(1)
    {
        cout<<"Enter the string : ";
        cin>>s;
        count=0;
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
     else if(s[0]=='a')
        cout<<"Accepted"<<endl;
     else
        cout<<"Rejected"<<endl;
    }
}

