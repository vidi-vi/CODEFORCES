#include <iostream>

using namespace std;

int main()
{
     int a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    int s=a+b+c+d+e;
    if(s%5==0&&s>0)
    cout<<s/5;
    else
    cout<<-1;

    return 0;
}
