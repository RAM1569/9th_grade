#include <iostream>

using namespace std;

int main()
{
    long long int a,b;
    int n,m,nr=0,c=2;
    cin>>n>>a>>b;
    while(n>nr)
        {

            for(int i=1; i<=b; i++)
                {
                    c *= 2;
                    if(c==m && m>=a && m<=b)
                    {
                    nr++;
                    cout<<c;
                    }
                }

        }
}
//nu e gata baga-mi-as pula
