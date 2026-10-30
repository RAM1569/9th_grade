#include <iostream>

using namespace std;

int main()
{
    int n,nr=-1;
    while (n!=0)
    {
        cin>>n;
        if(n%2==0)
        nr++;
    }
    if(nr==0)
    cout<<"NU EXISTA";
    else cout<<nr;
}
