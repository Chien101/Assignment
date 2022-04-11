#include <bits/stdc++.h>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int i_N=0;
    cin>>i_N;

    while(i_N--){
        int i_Size(0),diff(0),ct(0);
        string s1="",s2="";
        cin>>i_Size>>s1>>s2;
        int x(0),y(0);
        for(int i=0;i<i_Size;i++){
            if(s1[i]!=s2[i]){
                if(ct==0) x=i;
                else y=i;
                ct++;
                diff++;
            }
        }

        swap(s1[x],s2[y]);
        //swap(s2[Pos[0]],s1[Pos[1]]);
        if(diff!=2 || s1!=s2 ) cout<<"No\n";
        else cout<<"Yes\n";
    }

}
//aajjhdsjfdsfkadf
//aajjhjsjfdsfkajf
