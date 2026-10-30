#include <iostream>
#include <cassert>

using namespace std;

int nrCifre(int n,int k)
{
    int nr=0;
    if(n==0 && k==0)
        nr=1;
    else while(n)
            {
                if(n%10==k)
                nr++;
                n /= 10;
            }
            return nr;
}
int main ()
{
        assert(nrCifre(123123,2)==2);
        cout<<"toate testele au trecut";
    return 0;

}
