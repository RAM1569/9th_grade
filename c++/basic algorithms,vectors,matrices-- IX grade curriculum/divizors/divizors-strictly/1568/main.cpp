#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n;
    float b,s=0,nrDiv=0;
    cin>>n;
    for(int d=1; d*d<=n; d++)
    {
        if(n%d==0)
        {
            nrDiv++;
            s=s+d;

            if(d*d<n)
            {
                nrDiv++;
                s=s+n/d;

            }
        }

    }
    b=s/nrDiv;
    printf("%.2f",b);

    return 0;
}
