#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("joc.in");
ofstream fout("joc.out");

int main()
{
    int n,x,nrWhile=0,nrCifre=0,uc,midC,lastC,contComp;
    fin>>n;
    while(n>nrWhile)
    {
        fin>>x;
        int copiex=x;
        while(copiex!=0)
        {
            nrCifre++;
            copiex /= 10;
        }
        if(nrCifre%2==0)
            break;
        else
            {
              while(x>99)
              {
                      uc=x%10;
                    midC=(x/10)%10;
                  lastC=(x/100%10;
                  if(lastC>midC && uc>midC)
                    contComp=1;
                  else if()
              }
            }
        nrWhile++;
    }
    return 0;
}
