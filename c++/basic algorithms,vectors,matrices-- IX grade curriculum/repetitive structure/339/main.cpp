#include <iostream>

using namespace std;

int main()
{
    uint n,nr=0,a,nr1=-1;
    cin>>n;
    bool nr2=false;
    while (n>nr)
        {
            cin>>a;
            nr++;
            if(a%2==0)
                nr1=a;
        }
    if(nr1==-1)
    cout<<"IMPOSIBIL";
    else cout<<nr1;
}
