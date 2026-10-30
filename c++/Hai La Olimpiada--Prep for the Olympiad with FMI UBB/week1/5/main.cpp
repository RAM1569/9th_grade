#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    int n,nr=0,nr1=0, p=1, copie;
    cin>>n;
    copie=n;
    while(n)
    {
        int uc = n%10;
        if(uc% 2 ==0 )
        {
        nr= p * uc +nr;
        p *=10;
        nr1++;
        }
        n/=10;


    }
    if(p==1)
    cout<<"0";
    if(p==1 && nr==0 && copie !=0)
    cout<<"-1 "
    else if (copie ==0 )
            cout<<nr;

    return 0;
}
