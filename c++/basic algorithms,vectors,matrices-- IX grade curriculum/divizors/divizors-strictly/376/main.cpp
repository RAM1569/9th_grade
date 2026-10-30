#include <iostream>

using namespace std;

int main()
{
    long long int n,s=0;
    cin>>n;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0)
            {
                s=s+d;
                if(d*d<n)
                    s=s+n/d;
            }
    }
    cout<<s;
    return 0;
}
