#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int k,w,s,e,add=0;
    cin>>k>>w>>s>>e;

    int dis= k-2<=0? 20:20+(k-2)*5;
    int delay= w/2;
    delay*=5;

    for(int i=185+(e-19)*10;e>18&&e>s;i-=10){
            add+=i;
            e--;
    }


    cout<<dis+delay+add<<endl;

}

