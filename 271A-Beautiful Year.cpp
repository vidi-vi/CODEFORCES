#include <iostream>

using namespace std;

int main()
{
    int y;int k=0;int p;int a,b,c,d;cin>>y;
    while(k==0)
    {
        y++;p=y;a=p%10;p=p/10;b=p%10;p=p/10;c=p%10;p=p/10;d=p%10;p=p/10;
        if(a!=b&&a!=c&&a!=d&&c!=b&&d!=b&&c!=d)
        {
            k=1;break;
        }
    }
    cout<<y;

    return 0;
}
