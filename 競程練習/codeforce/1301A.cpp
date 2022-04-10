#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int i_N;
    cin>>i_N;

    while(i_N--){
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        bool b_true=1;
        for(int i=0;i<s1.length();i++){
            if(s1[i]!=s3[i] && s2[i]!=s3[i]){
                cout<<"NO\n";
                b_true=0;
                break;
            }
        }
        if(b_true) cout<<"YES\n";
    }
}
