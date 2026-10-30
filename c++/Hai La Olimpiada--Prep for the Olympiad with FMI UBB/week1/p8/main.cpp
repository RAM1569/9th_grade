#include <iostream>


using namespace std;

int fact(int n)
{
    int nr=1;
    for(int i=1; i<=n; i++)
        {
            nr=nr*i;
        }
    return nr;
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);

}
