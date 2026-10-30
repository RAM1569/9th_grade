#include <iostream>
#include <fstream>

using namespace std;
//folosind formula lui Legendre
ifstream fin("bac.in");
ofstream fout("bac.out");

int main() {
    long long n,p=0;
    fin >> n;
    while (n >= 13) {
        p += n / 13;
        n /= 13;
    }
    fout << p;
return 0;
}
