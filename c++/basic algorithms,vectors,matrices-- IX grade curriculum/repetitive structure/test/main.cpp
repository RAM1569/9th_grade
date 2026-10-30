#include <iostream>
#include <fstream>

using namespace std;
 ifstream fin("multiple.in");
 ofstream fout("multiple.out");

int main()
{
    int nrdiv,d,m,i;
    cin>>i;
        {
                d = 2; nrdiv = 1;
                    while (d * d <= i)
                    {
                        m = 0;
                    while (i % d == 0)
                            {
                                m++; i = i / d;
                            }
                    nrdiv = nrdiv * (m + 1);
                            d++;
                    }
                    if (i>1) nrdiv = nrdiv * 2;
            }
            cout<<nrdiv;
}
