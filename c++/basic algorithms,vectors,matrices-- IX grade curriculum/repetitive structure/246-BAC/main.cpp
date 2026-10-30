#include <iostream>

using namespace std;

int main()
{
    int n,nr=0,a,m,nr2=0,nr1=0;
    cin>>n;
    while (n>nr)
        {
            cin>>a;
            if(a%2==1)
            {nr1=nr2;
            nr2=a;}
            nr++;
        }
        if(nr1==0 && nr2==0)
        cout<<"Numere insuficiente";
        else if(nr1==0 || nr2==0)
                cout<<"Numere insuficiente";
                else cout<<nr1<<" "<<nr2;
        return 0;
}
