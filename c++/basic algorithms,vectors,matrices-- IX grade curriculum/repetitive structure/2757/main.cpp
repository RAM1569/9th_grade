#include <iostream>

using namespace std;

int main()
{
    int n,nr=0,a;
    cin>>n;
    while (n>nr)
        {
            cin>>a;
            if(a%3==0)
                cout<<(99+a/3)%10<<" ";
            else if(a%3==1)
                cout<<(100+a/3)/100<<" ";
                else cout<<((100+a/3)/10)%10<<" ";
                nr++;
        }
        return 0;
}
