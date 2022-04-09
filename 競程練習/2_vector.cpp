#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector <int> vtint(3,5);
    int _in;
    while(cin>>_in){
        vtint.push_back(_in);
    }

    cout<<"size: "<<vtint.size()<<"\n";
    for(int i=0;i<vtint.size();i++) cout<<vtint[i]<<" ";
    cout<<"\n";

    vtint.pop_back();
    vtint.pop_back();

    cout<<"size: "<<vtint.size()<<"\n";
    for(int i=0;i<vtint.size();i++) cout<<vtint[i]<<" ";
    cout<<"\n";
    cout<<vtint.empty()<<"\n";

    vtint.assign(7,50);
    for(int i=0;i<vtint.size();i++) cout<<vtint[i]<<" ";
    cout<<"\n";

    vtint.clear();
    cout<<vtint.empty()<<"\n";

   vtint.assign(5,100);
   for(auto it=vtint.begin();it!=vtint.end();it++)cout<<*it<<" ";
}
