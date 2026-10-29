#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("joc.in");
ofstream fout("joc.out");

int main()
{
    int n,x,nrWhile=0,nrCifre=0,uc,midC,lastC,contComp=0,nrNr=0;
    fin>>n;
    while(n>nrWhile)
    {
        fin>>x;
        int copiex=x;
		nrCifre=0;
        while(copiex!=0)
        {
            nrCifre++;
            copiex /= 10;
        }
            x /= 10;
        if(nrCifre%2==1)
            while(x>99)
              {
                    x /= 10; 
                    uc=x%10;
                    midC=(x/10)%10;
                  lastC=(x/100)%10;
				  	x /= 10;
             	if(lastC>midC && uc>midC)
                    contComp=1;
				else if(lastC<midC && uc<midC)
							contComp=1;
					else {
						contComp=0;
						break;
					}

              }
			  if(contComp==1)
			  nrNr++;
			
        nrWhile++;
    } 
	fout<<nrNr;
    return 0;
}