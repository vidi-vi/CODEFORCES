#include <iostream>

using namespace std;

int main()
{
    int n,m;cin>>n>>m;char a[n][m];int k=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]!='B'&&a[i][j]!='W'&&a[i][j]!='G')
            {
                cout<<"#Color";return 0;
            }
        }
    }
    cout<<"#Black&White";
    return 0;
}
