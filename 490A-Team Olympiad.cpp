#include <iostream>

using namespace std;

int main()
{   int a=0,b=0,c=0;int k=0;
    int n;cin>>n; int t[n];
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
        if(t[i]==1)
        a++;
        if(t[i]==2)
        b++;
        if(t[i]==3)
        c++;
    }
    if(a==0||b==0||c==0)
    {cout<<"0";return 0;}
    int w= min(a,min(b,c));
    cout<<w<<endl;
    for(int i=0;i<w;i++)
    {
        
        while(t[k]!=1)
        k++;
        cout<<k+1<<" ";
        t[k]=-1;k=0;
         while(t[k]!=2)
        k++;
        cout<<k+1<<" ";
        t[k]=-1;k=0;
         while(t[k]!=3)
        k++;
        cout<<k+1<<" ";
        t[k]=-1;k=0;
        cout<<endl;
    }
    return 0;
}
