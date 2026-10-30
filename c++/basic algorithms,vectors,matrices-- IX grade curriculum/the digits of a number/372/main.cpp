#include <iostream>

using namespace std;

int main()
{
    int n,nr=0,nrPer=0,x,sCifre1=0,sCifreBack=0,nrp=0;
    cin>>n;
    while(n>nr)
            {
                cin>>x;
                sCifre1=0;
                while(x!=0)
                    {
                        sCifre1=sCifre1+x%10;
                        x /= 10;
                    }
                    if(sCifre1!=sCifreBack)
                        {nrPer++;
                        nrp++;}
                        sCifreBack=sCifre1;

                    nr++;
            }
            cout<<nrPer;

    return 0;
}
