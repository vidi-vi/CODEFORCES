#include <iostream>

using namespace std;

int main()
{
    int n;string s;cin>>n>>s;int c;
    for(int i=65;i<=90;i++)
    {    c=0;
        for(int j=0;j<n;j++)
        { if(s[j]==i||s[j]==i+32)
          { c=1;
          }
        }
        if(c==0)
        {
         cout<<"NO";return 0;
        }
    }
    cout<<"YES";
    return 0;
}
