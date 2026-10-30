#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n,x,C=0,nr=0;
    cin>>n;
    while(n>nr)
            {
                cin>>x;
                if (sqrt(x)==int(sqrt(x)))
                    C=C+3*x;
                else

                    {
                        if(x==1)
                            C=C+3;
                        else
                     {
                        for(int d=2; d*d<=x; d++)
                                {
                                    if(x%d==0)
                                    {
                                        C=C+x;
                                        break;
                                    }

                                }

                            }
                    }
                    nr++;
                }
                cout<<C;
    return 0;
}
