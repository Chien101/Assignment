#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x=0,y=0,i_N=0;
    cin>>x>>y>>i_N;
    int small=1000,rx=0,ry=0;

    while(i_N--){
        int tx=0,ty=0;
        float d=0;
        cin>>tx>>ty;

        d= sqrt( pow(tx-x,2)+ pow(ty-y,2));

        if(d<small){
            small=d;
            rx=tx;
            ry=ty;
        }
    }

    cout<<rx<<" "<<ry<<endl;
}
