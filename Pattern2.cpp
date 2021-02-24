#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
            cout<<j+1;
        cout<<"\n";
    }
    return 0;
}


/*
5
1
12
123
1234
12345

*/
