#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

int Sirk(int p)
{
    int k,s=0,a1=1,ak,r=2,c=1,dr=0,st;
    while(p > dr)
        {
                st=dr;
                dr=dr+k*r;
                k++;
        }
        if(p==1)
        return 1;
        else  if(p<=dr-k)
        return abs(st-p)+1;
        else return dr-p+1;
}
int main()
    {
        assert(Sirk(1)==1);
        assert(Sirk(2)==2);
        assert(Sirk(3)==1);
        assert(Sirk(15)==3);
        assert(Sirk(17)==5);
        assert(Sirk(20)==2);
    }
