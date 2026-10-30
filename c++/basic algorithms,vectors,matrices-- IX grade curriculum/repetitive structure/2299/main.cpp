#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,i,j;
    cin>>n;
    for (i=1; i<=n, i++)
        {
        for(j=1; j<+n; j++)
            if(i+j==n && j>=i)
            cout<<i<<" "<<j<<" ";
        }
}
