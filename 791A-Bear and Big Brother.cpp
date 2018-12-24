#include <iostream>
#include<algorithm>
using namespace std;

int main()
{  int l,b,c=0;cin>>l>>b;
    while(l<=b)
    {
        l=3*l;b=b*2;
        c++;
    }
    cout<<c;
    return 0;
}
