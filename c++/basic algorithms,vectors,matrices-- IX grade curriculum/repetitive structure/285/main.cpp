#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int k,x,y,m,r1;

    cin>>k;
    for(int i=1; i<=k; i++)
        {
            m=k-i*i;
            r1=sqrt(m);
            y=sqrt(m);
            if(r1*r1==m && i<=y)
            {
                cout<<i<<" "<<y<<endl;
            }

        }

}
