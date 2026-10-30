#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    uint a,n,nr=0,nr1=0;
    float s=0;
    cin>>a;
    while(a>nr)
        {
            cin>>n;
            nr++;
            if(n%2==0)
            {s=s+n;
            nr1++;}
        }
        s=s/nr1;
        printf("%.3f",s);
        return 0;
}
