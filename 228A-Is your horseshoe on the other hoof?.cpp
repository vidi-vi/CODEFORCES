#include <iostream>

using namespace std;

int main()
{
    long int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b&&b==c&&c==d)
    {cout<<"3";}
    else if(a==b&&b==c||d==b&&b==c||a==b&&b==d||a==d&&d==c||a==b&&d==c||a==c&&d==b||a==d&&b==c)
     {cout<<"2";}
     else if(a==b||b==c||a==c||a==d||b==d||c==d)
      {cout<<"1";}
      else
       {cout<<"0";}

    return 0;
}
