#include <iostream>

using namespace std;

int main(){
    int a,b,s=0,nrDivPar=0,nrDivImp=0;
    cin>>a>>b;
    for(int i=a; i<=b; i++)
        {
            nrDivImp=0;
            nrDivPar=0;
            for(int j=1; j*j<=i; j++)
                {
                    if(i%j==0)
                        {
                            {
                            if (j%2==0)
                                  nrDivPar++;
                            else nrDivImp++;
                             
                            if(j*j<i)
                             {
                                if((i/j)%2==0)
                                    nrDivPar++;
                                else nrDivImp++;
                             }
                            }
                        }
                }
                if(nrDivPar==nrDivImp)
                    s=s+i;
        }
    cout<<s;
}
    

