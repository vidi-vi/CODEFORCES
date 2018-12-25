#include <iostream>

using namespace std;

int main()
{   int n;cin>>n;int a[n][2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    int m=0,c=0;
    for(int i=0;i<n;i++)
    {
       if(a[i][0]>a[i][1])
       m++;
        if(a[i][0]<a[i][1])
       c++;
       
    }
    if(m>c)
    {
        cout<<"Mishka";
    }
    else if (c>m)
    {
        cout<<"Chris";
    }
    else
    {
        cout<<"Friendship is magic!^^";
    }
    return 0;
}
