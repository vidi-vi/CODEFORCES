#include <iostream>
#include<ctype.h>

using namespace std;

int main()
{
    string s;cin>>s;int lo=0;int u=0;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            lo++;
        }
    }
    u=l-lo;
    if(u>lo)
    {
         for(int i=0;i<l;i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            s[i]-=32;
        }
    }
      
    }
    else
    {
         for(int i=0;i<l;i++)
    {
        if(s[i]>=65&&s[i]<=90)
        {
            s[i]+=32;
        }
    }
        
    }
    cout<<s;

    return 0;
}
