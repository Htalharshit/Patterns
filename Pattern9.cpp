#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            cout<<n-j;
        cout<<"\n";
    }
    return 0;
}

/*
5
54321
5432
543
54
5

*/
