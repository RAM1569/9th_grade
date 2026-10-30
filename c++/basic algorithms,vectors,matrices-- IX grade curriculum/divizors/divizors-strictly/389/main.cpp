#include <iostream>

using namespace std;

int main()
{
    int a,b,nrDivNr=0,nrDivMax=0,xmin,xmax;
    cin>>a>>b;
    xmin=b;
    xmax=a;
    for(int i=a; i<=b; i++)
        {
            nrDivNr=0;
            for(int d=1; d*d<=i; d++)
            {
                if (i%d==0)
                {
                    if(d%2==0)
                        nrDivNr++;
                        if(d*d<i && (i/d)%2==0)
                            nrDivNr++;
                }
            }

            if(nrDivMax<nrDivNr)
            {
                nrDivMax=nrDivNr;
                xmin=i;
                xmax=i;
            }
            else if(nrDivMax==nrDivNr)
                {
                    xmax=i;
                }
        }
        cout<<nrDivMax<<" "<<xmin<<" "<<xmax;
    return 0;
}
