#include <iostream>

using namespace std;

int main()
{

    int n;cin>>n;string s;int a=0,b;
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            a++;
        }
    }
    b=n-a;
    if(a>b)
    {
        cout<<"Anton";
    }
    else if(b>a)
    {
        cout<<"Danik";
    }
    else
    cout<<"Friendship";
    return 0;
}

