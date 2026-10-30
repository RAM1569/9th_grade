#include <iostream>

using namespace std;

int main()
{
    int a=1 ,m,nr=1,i,s=0;
    cin>>m;
    while (nr<m)
        {
            for(i=a; i<=m; i++)
                {
                    if(s<m)
                    s=s+i;
                    else break;
                }
                cout<<endl;
                s=0;
                nr++;
                a++;

        }
}
