#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,m;int s=1000;cin>>n>>m;int a[m];
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    for(int i=0;i<=m-n;i++)
    {   
        if(a[i+n-1]-a[i]<s)
        {
            s=a[i+n-1]-a[i];
        }
    }
    cout<<s;
    return 0;
}
