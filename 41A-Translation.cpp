#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
      string s,t;cin>>s;cin>>t;
    int l= s.length();
    reverse(s.begin(),s.end());
    if(s==t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}
