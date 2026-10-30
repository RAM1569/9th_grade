#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("smartphone.in");
ofstream fout("smartphone.out");

int main()
{
    int a,n,nr=0,C;
    long long int x, max=0, max1=0;
    fin>>C;
    fin>>n;
    if(C==1)
        {
            while(n>nr)
            {
            fin>>x;
            if(x>max)
                {
                    max1=max;
                    max=x;
                }
                nr++;
            }
                fout<<max;
        }

    if(C==2)
    {
            while(n>nr)
                {
                fin>>x;
                if(x>max)
                   {
                    max1=max;
                    max=x;
                   }
                else if(x>max1)
                    {
                        max1=x;
                    }
                   nr++;
                }

            fout<<max1;
            }

            return 0;
}
