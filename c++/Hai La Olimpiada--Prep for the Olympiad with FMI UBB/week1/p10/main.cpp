#include <iostream>

using namespace std;

int main()
{
    long long int n,x,nr=0,s=0;
    cin>>n;
    while(n>nr)
        {
            cin>>x;
            while(x>9)
                {
                    x /= 10;
                }
                s=s*10+x;
                nr++;
        }
        cout<<s;
}
