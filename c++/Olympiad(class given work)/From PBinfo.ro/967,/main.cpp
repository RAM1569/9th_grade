#include <iostream>

using namespace std;

int main()
{
    int n,s,prim=0,nrp=0,nr=0,suma1=0,nrc=0;
    short int c;
    cin>>n>>c;

    //1
    while (n>nr)
            {
                cin>>s;
                if(s<2) prim=0;
                else {
                            prim=1;
                        for(int d=2; d*d<=s; d++)
                            if(s%d==0)
                            {
                                prim=0;
                                break;
                            }
                            if(prim==1)
                            suma1=suma1+s;
                            //2
                            while(s!=0)
                            {
                                if(s%10==c)
                                    nrc++;
                                    s /= 10;
                            }

                            //3

                    }
                    nr++;


            }
            cout<<suma1<<'\n'<<nrc;

    return 0;
}
