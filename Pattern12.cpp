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
        for(j=0;j<i*2+1;j++)
            cout<<"*";
        cout<<"\n";
    }
    return 0;
}


/*
5
    *
   ***
  *****
 *******
*********


*/
