#include <iostream>

using namespace std;

int main()
{
    int a,nr,uc,ogl=0;
    cin>>a;
    while(a!=0)
        {
            uc=a%10;
            a /=10;
            ogl=ogl*10+uc;
        }
        while(ogl!=0)
        {
            cout<<ogl%10<<" ";
            ogl /= 10;
        }
        return 0;
}
// 2
{
    int n,p=1,c;
    cin>>n;
    c=n;
    while (n>0)
    {
        p*=10;
        n/=10;

    }
    p /= 10;
    while(p !=0)
    {
        cout<< c/p<<" ";
        c=c%p;
        p/=10;
    }
    return 0;
}
