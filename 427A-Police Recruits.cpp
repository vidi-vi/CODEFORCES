#include <iostream>

using namespace std;

int main()
{  int n;cin>>n;int a[n];int s=0,c=0;
    for(int i=0;i<n;i++)
    {   cin>>a[i];
        if(a[i]>0)
        c=c+a[i];
        if(a[i]==-1)
       { if(c==0)
            s++;
         else
         c=c+a[i];
       
       }
    }
    if(s>0)
    {
        cout<<s;
    }
    else
    cout<<"0";
    return 0;
}
