#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i_N,res(0);
    cin>>i_N;

    while(i_N--){
        int i_size=0;
        string Line="";
        cin>>i_size>>Line;

        for(int i=0;i<i_size-1;i++){
            if(Line[i]=='A'){
                int ct=i+1,tmp=0;
                while(Line[ct]!='A' && ct<i_size){
                    ct++,tmp++;
                }
                if(tmp>res) res=tmp;
            }
        }
        cout<<res<<"\n";
        res=0;
    }
}

