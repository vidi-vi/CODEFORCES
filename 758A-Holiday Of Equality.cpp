#include <iostream>
#include<algorithm>
using namespace std;

int main()
{   int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);int s=0;
   
    for(int i=0;i<n-1;i++)
    {
        s=s+(a[n-1]-a[i]);
    }
    cout<<s;
    return 0;
}
