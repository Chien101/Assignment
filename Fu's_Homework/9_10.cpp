#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0), cin.tie(0);

    int arr[7]={2,1,3,5,7,8,10};

    for(int red=1;red<sizeof(arr)/sizeof(int) ;red++){
        for(int blue=red;blue>=1;blue--){
            if(arr[blue]>arr[blue-1]){
                int Tmp=arr[blue];
                arr[blue]=arr[blue-1];
                arr[blue-1]=Tmp;
            }else{
                break;
            }
        }
    }

    for(int i=0;i<sizeof(arr)/sizeof(int);i++){
        cout<<arr[i]<<" ";
    }

}


