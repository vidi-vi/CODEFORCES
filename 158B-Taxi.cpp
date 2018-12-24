#include <iostream>

using namespace std;

int main()
{   int n,a=0,b=0,c=0,d=0,s=0;
    cin>>n;int h[n];
    for(int i=0;i<n;i++)
    {
        cin>>h[i];
        if(h[i]==4)
        a++;
         if(h[i]==3)
        b++;
         if(h[i]==2)
        c++;
         if(h[i]==1)
        d++;
        
    }
    s=a+min(b,d)+(c/2);
     int p=d;
    if(d>b)
    {
        d=d-b;
    }
    if(b>=p)
    {
        s=s+(b-d);d=0;
    }
    if(c%2==1)
    {
        s++;c=0;d=d-2;
    }
    while(d>0)
    {
        s++;d=d-4;
    }
    cout<<s;
    return 0;
}
