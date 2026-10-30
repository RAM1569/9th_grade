#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int n,nr=0,x,p,cont2=0,cont5=0,rest,inm,m;
    cin>>n;
    p=1;
    while(n>nr)
        {
            cont2=0;
            cont5=0;
            cin>>x;
            while(x%2==0)
                {
                    cont2++;
                    x /= 2;
                }
                while(x%5==0)
                {
                    cont5++;
                    x /= 5;
                }
                if(cont5>cont2)
                {
                rest=cont5-cont2;
                    inm=5;
                    }
                else {
                rest=cont2-cont5;
                inm=2;}
                p=(p*(x%10))%10;
                nr++;
        }
        m=(p*pow(inm, rest));
        cout<<m%10;


    return 0;
}
