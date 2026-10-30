#include <iostream>

using namespace std;

int main()
{
    int n,nr=0,m=0,s=0;
    cin>>n;
    while(n>0)
    {
        s=s+n%10;
        n /= 10;
    }
    if(s>10)
    {
    while(s>10)
            {
            m=s%10;
            s /=10;
            }
            cout<<m;
        }
    else cout<<s;
return 0;
}

