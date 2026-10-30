#include <iostream>
#include <stdint.h>

using namespace std;

int main()
{
    uint32_t z,pb,b,pt,t,s=0;
    cin>>z>>pb>>b>>pt>>t;
    for(int i=pb; i<=b*z; i=i+b)
        {
            for (int j=pt; j<=t*z; j=j+t)
                {
                if(i==j)
                s=j;
                }
        }
        if(s==0)
        cout<<-1;
        else cout<<s;
        return 0;

}
