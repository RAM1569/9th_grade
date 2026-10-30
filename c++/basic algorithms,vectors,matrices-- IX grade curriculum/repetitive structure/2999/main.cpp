#include <iostream>

using namespace std;

int main()
{
    int a,k,r,s=0,t=0,nr=0,nr1=0,ma,j,y,u,nr3=0,nr4=0,nrf=0,d;
    cin>>a>>k>>r;
    if(a%2==0)
        cout<<a/2<<endl;
        else cout<<(a-1)/2<<endl;
        //nr par  de multimi
        for(int i=k*(k-1)/2; i<k*(k+1)/2; i++)
                {
                    s=s+i;
                    nr++;
                    cout<<i<<" ";
                }
                cout<<endl;
                for(j=r*(r-1)/2; j<r*(r+1)/2; j++)
                {
                    t=t+j;
                    nr1++;
                    cout<<j<<" ";
                }
                cout<<t;
                ma=( t/nr1+s/nr)/2+1;
                cout<<ma<<endl;
                while(nrf<=nr1)
                    {
                        while (nr3<2)
                            {
                            for (int b=d*(d-1)/2; b<d*(d+1)/2; b++)
                                    {
                                        cout<<b<<" ";
                                        nr3++;
                                        d=d+2;
                                    }
                            }
                        while(nr4<1)
                            {
                                for (int c=r*(r+1)/2; c>r*(r-1)/2; r--)
                                    {
                                        cout<<r<<" ";
                                        nr4++;
                                        r=r-1;
                                    }

                            }
                        nrf=nrf+3;
                    }


}
