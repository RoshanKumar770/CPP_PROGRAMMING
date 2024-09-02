#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int value){ 
        data=value;
        next=NULL;
    }
};
class Linkedlist{
public:
    Node* head=NULL;
    Node* tail=NULL;
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool Search(Node* head,Node* key){
     Node* temp=head;
     while(temp!=NULL){
          if(key==temp){
               cout<<"Element found"<<endl;
               return true;
          }
          temp=temp->next;
          return false;
     }

}
void InsertAtHead(int value){
    Node* temp = new Node(value);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}
};
int main(){
    Linkedlist ll;
    ll.InsertAtHead(9);
    ll.InsertAtHead(8);
    ll.InsertAtHead(7);
    ll.InsertAtHead(6);
    ll.InsertAtHead(5);
    ll.display();
    //ll.Search();
    return 0;
}