#include <iostream>
#include <string>
using namespace std;
void InsertBeg(int d);
void InsertEnd(int d);
void PrintList();
void ClearList();
void DeleteBegin();
void DeleteEnd();

struct Node{
    int data=0;
    Node* link=nullptr;
};

Node* head= nullptr;

int main(){
    Node* ptr= new Node;
    ptr->data=2;
    ptr->link=nullptr;
    head= ptr;

    cout<<"How many steps do you need?\n";
    int i_N=0;
    cin>>i_N;

    for(int i=0;i<i_N;i++){
        cout<<"What do you want to do?\n";
        string input="";
        cin>>input;

        if(input=="Begin"){
            int _in=0;
            cin>>_in;
            InsertBeg(_in);
        }
        else if(input=="End"){
            int _in=0;
            cin>>_in;
            InsertEnd(_in);
        }
        else if(input=="Clear"){
            ClearList();
        }
        else if(input=="De-Begin"){
            DeleteBegin();
        }
        else if(input=="De-End"){
            DeleteEnd();
        }
        else{
            cout<<"input error\n";
        }

        cout<<i<<"Round\n";
        PrintList();
        cout<<"\n\n\n";
    }

    PrintList();
    ClearList();
}

void InsertBeg(int d){
    Node* Tmp= new Node;
    Tmp->data= d;
    Tmp->link= head;
    head= Tmp;
}

void InsertEnd(int d){
    Node* New= new Node;
    New->data= d;
    New->link= nullptr;

    if(head==nullptr){
        head= New;
    }
    else{
        Node* Last=head;

        while(Last->link!= nullptr){
            Last= Last->link;
        }
        Last->link= New;
    }
}

void PrintList(){
    Node* tmp=head;
    while(tmp!=nullptr){
        cout<<tmp->data<<" ";
        tmp= tmp->link;
    }
}

void ClearList(){
    while(head!=nullptr){
        Node* Current=head;
        head= head->link;
        delete Current;
    }
}

void DeleteBegin(){
    if(head==nullptr){
        cout<<"list is empty\n";
    }
    else{
        Node* Tmp=head;
        head= head->link;
        delete Tmp;
    }
}

void DeleteEnd(){
    if(head==nullptr){
        cout<<"list is empty\n";
    }
    else if(head->link==nullptr){
        Node* Tmp= head;
        head= nullptr;
        delete Tmp;
    }
    else{
        Node* prev=nullptr,*current=nullptr;
        current= head;

        while(current->link!=nullptr){
            prev=current;
            current= current->link;
        }

        prev->link=nullptr;
        delete current;
    }
}
