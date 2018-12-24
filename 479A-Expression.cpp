#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,i,j;cin>>a>>b>>c;
    d=a+b+c; e=a*b*c; f=a+(b*c); g=(a+b)*c; h=(a*b)+c; i=a*(b+c);
    cout<<max(d,max(e,max(f,max(g,max(h,i)))));
    
    return 0;
}
