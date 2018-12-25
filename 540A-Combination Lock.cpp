#include <iostream>

using namespace std;

int main()
{   int n;cin>>n;int s=0;
    string a,b;cin>>a>>b;
    for(int i=0;i<n;i++)
    {  
       s=s+min(abs(a[i]-b[i]),abs(10-abs(a[i]-b[i]))); 
    }
    cout<<s;
    
    return 0;
}
