#include <iostream>

using namespace std;

int main()
{
    int n,max1=0;
    cin>>n;
    for(int d=2; d<=n; d++)
    {

        if(n%d==0 && max1==0)
            max1=d;
        if(max1!=0)
            break;
    }
    cout<<max1*max1;
}
