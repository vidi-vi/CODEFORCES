#include <iostream>

using namespace std;

int main()
{
    
    int n;
    cin>>n;int s=n;int t=1;
    if(n==1)
    {
        cout<<1;return 0; 
    }
    if(n==2)
    {
        cout<<3;return 0;
    }
    for(int i=n-1; i>=1;i--)
    {
        s=s+i+((i-1)*t);t++;
    }
    cout<<s;
    return 0;
}
