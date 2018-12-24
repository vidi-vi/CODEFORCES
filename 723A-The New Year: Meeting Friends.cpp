#include <iostream>

using namespace std;

int main()
{   int a[3];cin>>a[0]>>a[1]>>a[2];int t;int c;int s=0;
    for(int i=0;i<2;i++)
    { for(int j=0;j<2-i;j++)
      { if(a[j]>a[j+1]){ t=a[j];a[j]=a[j+1];a[j+1]=t;}
      }
    }
    s=abs(a[0]-a[1])+abs(a[1]-a[2]);
    cout<<s;
    return 0;
}
