#include <iostream>
using namespace std;
/*Given a natural number \(n\) (\(n > 1\)),
  determine how many pairs of natural numbers \((a, b)\) satisfying \(1 \le a \le b \le n\) are coprime (relatively prime).*/

int main(){
    int n,a=2,nrNr=0,nrWhile=1,rest,copieNrWhile;
    cin>>n;
    nrNr=nrNr+n; //toate perechile cu unu Ex:(1,6) care mereu sunt prime intre ele but without (6,1)
    while(n>nrWhile)
            {
                for(int i=nrWhile+1; i<=n; i++)
                    {
                        int copiei=i;
                        if(i==1)
                        nrNr++;
                        else {
                            copieNrWhile=nrWhile+1;
                            while(copiei)
                                {
                                    rest=copieNrWhile%copiei;
                                    copieNrWhile=copiei;
                                    copiei=rest;
                                }
                                if(copieNrWhile==1)
                                    nrNr++;
                        }
                    }
                    nrWhile++;
            }
        cout<<nrNr;
return 0;
}