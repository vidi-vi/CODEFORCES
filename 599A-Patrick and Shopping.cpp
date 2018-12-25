#include <iostream>

using namespace std;

int main()
{
   int d1,d2,d3,a,b,c,d;cin>>d1>>d2>>d3;
    a=d1+d2+d3;
    b=2*(d1+d2);
    c=2*(d1+d3);
    d=2*(d3+d2);
    int s= min(a,min(b,min(c,d)));
    cout<<s;
   

    return 0;
}
