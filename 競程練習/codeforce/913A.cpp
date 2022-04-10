#include <iostream>
#include <cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long int n=0,m=0;
    cin>>n>>m;
    cout<<m% int(pow(2,n))<<"\n";
}
//8 88127381
