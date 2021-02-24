#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n-i-1;k++)
            cout<<" ";
        for(j=i+1;j>0;j--)
            cout<<j;
        cout<<"\n";
    }
    return 0;
}

/*
5
    1
   21
  321
 4321
54321

*/
