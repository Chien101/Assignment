#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int i_N=0;
    cin>>i_N;

    while(i_N--){
        string input="";
        bool flag=true;
        cin>>input;
        sort(input.begin(),input.end());

        for(int i=0;i<input.length()-1;i++){
            if(input[i+1]-input[i]!=1){
                cout<<"NO\n";
                flag=false;
                break;
            }
        }

        if(flag) cout<<"Yes\n";
    }

}
