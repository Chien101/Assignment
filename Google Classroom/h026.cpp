#include <iostream>
#include <vector>
using namespace std;

int fn_WinSign(int);
int fn_GetRes(int,int);

int main(){
    int first=0,i_N=0;
    bool bool_end=false;
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

        if(sis[i-1]==sis[i-2] && i>=2){
                bro.push_back(fn_WinSign(sis[i-2]));
        }
        else if(i>0){
                bro.push_back(sis[i-1]);
        }

        if(fn_GetRes(bro[i],sis[i])==1){
            for(vector<int>:: iterator it=bro.begin(); it!=bro.end(); it++){
                cout<<*it<<" ";
            }
            cout<<": Won at round "<<i+1<<endl;
            bool_end=1;
            break;
        }
        else if(fn_GetRes(bro[i],sis[i])==2){
            for(vector<int>:: iterator it=bro.begin(); it!=bro.end(); it++){
                cout<<*it<<" ";
            }
            cout<<": Lost at round "<<i+1<<endl;
            bool_end=1;
            break;
        }
    }

    if(!bool_end){
        for(vector<int>:: iterator it=bro.begin(); it!=bro.end(); it++){
                cout<<*it<<" ";
        }
        cout<<": Drew at round "<<i_N<<endl;
    }
}

int fn_WinSign(int _in){
    if(_in==0) return 5;
    else if(_in==2) return 0;
    else return 2;
}

int fn_GetRes(int p1,int p2){
    if(p1==p2) return 0;
    else if(p1==0){
            if(p2==2) return 1;
            else return 2;
    }
    else if(p1==2){
        if(p2==5) return 1;
        else return 2;
    }
    else{
        if(p2==0) return 1;
        else return 2;
    }
}

