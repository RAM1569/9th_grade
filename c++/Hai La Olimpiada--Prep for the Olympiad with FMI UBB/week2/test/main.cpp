#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (long long d = 1; d * d <= n; d++)
            if (n % d == 0) {
            if (d != n / d)
            cout<<d<<" "<<n/d<<" ";
            else cout<<d;
            }
}
