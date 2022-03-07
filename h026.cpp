#include <iostream>
#include <vector>
using namespace std;

int (int);

int main(){
    int first=0,i_N=0;
    vector <int> bro,sis;
    cin>>first;
    bro.push_back(first);
    cin>>i_N;

    for(int i=0;i<i_N;i++){
        int _in=0;
        cin>>_in;
        sis.push_back(_in);
    }

    for(int i=0;i<i_N;i++){
        if(i>=2){
            if(sis[i-1]==sis[i-2]){

            }
        }
    }


}
