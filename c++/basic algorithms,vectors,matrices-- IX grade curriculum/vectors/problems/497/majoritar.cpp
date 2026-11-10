#include <iostream>
using namespace std;
int main(){
    int candidat=-1,voturi=0,n;
    cin>>n;
    int X[100000];
    for(int i=0; i<=n-1; i++)
        {
            cin>>X[i];
            if(voturi==0)
                {
                    candidat=X[i];
                    voturi=1;
                }
            else if(candidat==X[i])
                    {
                        voturi++;
                    }
                else voturi--;
        }
        //algoritmul de vot Boyer-Moore
        //practic gasesc "candidatul", cel mai probabil nr sa fie cel mai des
        int nr=0;
    for(int i=0; i<=n-1; i++)
        if(X[i]==candidat)
            nr++;
    if(nr>n/2)
    cout<<"DA"<<" "<<candidat;
    else cout<<"NU";    
}