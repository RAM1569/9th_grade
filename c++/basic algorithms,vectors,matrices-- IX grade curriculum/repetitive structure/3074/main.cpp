#include <iostream>

using namespace std;

int main()
{
    long long int n,s,nr=0,m=1,a,sumac=0,b;
    cin>>n>>s;
    for(int i=1; i<=n-1; i++)
        {
            m *= 10;
        }

        for(long int j=m; j<m*10; j++)
            {
                b=j;
                while (b!=0)
                    {
                        a=b%10;
                        b /= 10;
                        sumac=sumac+a;

                    }
                    if(sumac==s)
                            {
                                cout<<j<<" ";
                                nr ++;
                            }
                            sumac=0;

            }
            cout<<endl;
            cout<<nr;
return 0;
}
