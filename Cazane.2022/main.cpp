#include <iostream>
#include <algorithm>
using namespace std;
bool fcmp(int x, int y)
{
    if(x > y)
        return true;
    return false;
}
int main()
{int N, M, i, cazan[1001], pacat[1001], Scaz=0, Spacat=0;
int k=1;
    cin>>N>>M;
    for(i=1; i<=N; i++)
        cin>>cazan[i];
    /*for(i=1; i<=M; i++)
        cin>>pacat[i];*/
    sort(cazan + 1, cazan + N + 1, fcmp);
    Scaz+=cazan[k];
    for(i=1; i<=M; i++){
        cin>>pacat[i];
        Spacat+=pacat[i];
        cout<<"Spacat="<<Spacat<<endl;
        cout<<"Scaz="<<Scaz<<endl;
        if(Spacat<=Scaz) cout<<k<<" ";
            else{
                while(Scaz<Spacat){
                    k++;
                    Scaz+=cazan[k];
                }
                cout<<k<<" ";
            }
    }
}
