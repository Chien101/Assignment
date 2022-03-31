#include <iostream>
using namespace std;

int main(){

    int x(0),r(0),v(0),i_N(0);
    cin>>x>>r>>v>>i_N;

    while(i_N--){
        int tx,tv;
        cin>>tx>>tv;

        if(tx-x>r || tx-x <-r) continue;
        else if(tv<=v){
            x=tx;
        }
        else{
            if(tx==x) x-=15;
            else if(tx<x) x+=15;
            else x-=15;
        }
    }

    cout<<x<<endl;

}

