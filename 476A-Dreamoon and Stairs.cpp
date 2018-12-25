#include <iostream>

using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int p=n/2;
    if(n%2!=0)
    {
        p++;
    } 
    for(int i=p;i<=n;i++)
    {
        if(i%m==0)
        {
            cout<<i;return 0;
        }
    }
    cout<<-1;
    return 0;
}
