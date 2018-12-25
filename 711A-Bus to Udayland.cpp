#include <iostream>

using namespace std;

int main()
{
    int n,k=0;
    cin>>n;char a[n][5];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
       if(a[i][0]=='O'&&a[i][1]=='O')
       {
           cout<<"YES";
           a[i][0]='+';
           a[i][1]='+';k=1;break;
       }
       if(a[i][3]=='O'&&a[i][4]=='O')
       {
           cout<<"YES";
           
           a[i][3]='+';
           a[i][4]='+';k=1;break;
       }
    }
    if(k==0)
    {
        cout<<"NO";return 0;
    }
    
    cout<<endl;
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<a[i][j];
        } cout<<endl;
    } 
        
    

    return 0;
}
