#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,n,i,j;
    cin>>n>>a;
    j=n;
    cout<<1<<" ";
    for(i=1; i<=19; i++)
        {
        if(n<=a)
        cout<<n<<" ";
        n *= j;
        }

}
