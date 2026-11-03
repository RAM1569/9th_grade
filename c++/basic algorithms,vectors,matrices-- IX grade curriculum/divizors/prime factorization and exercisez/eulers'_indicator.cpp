#include <iostream>
using namespace std;
int main(){
    int n,p,s,d=2;
    float x;
    cin>>n;12
    s=n;
    while(n>1)
        {
            if(n%d==0)
                {
                    p=0;
                    while(n%d==0)
                        {
                            p++;
                            n /= d;
                        }
                    x=1-1/d;
                    s=s*x;
                }
            d++;
        }
        cout<<s;
}