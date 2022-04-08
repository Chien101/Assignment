#include <bits/stdc++.h>
using namespace std;
void InsertBeg(int d);
struct Node{
    int data=0;
    Node* link=nullptr;
};

Node* head= new Node;

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    Node* ptr= new Node;
    ptr->data=2;
    ptr->link=nullptr;

    head= ptr;
}

void InsertBeg(int d){
    Node* ptr= new Node;
    ptr->data= d;
    ptr->link= head;
    head= ptr;
}
