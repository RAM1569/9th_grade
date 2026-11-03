#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=2,p,s=1;
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
                    s=s*(p+1);
                }
            d++;
        }
    cout<<s;

}