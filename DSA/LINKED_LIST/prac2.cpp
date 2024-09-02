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
void InsertionAtHead(int value){
     Node* temp= new Node(value);
     if(head==NULL){
          head=temp;
          tail=temp;
     }
     else{
          temp->next=head;
          head=temp;
     }
}
void deleteAtHead(){
     Node* temp=head;
     head->data=head->next->data;
     head->next=head->next->next;
}
void deleteAtTail() { 
    if (!head) return;
    if (!head->next) {
        head = tail = NULL;
        return;
    }
    Node* temp;
    for (temp = head; temp->next->next; temp = temp->next);
    tail = temp;
    tail->next = NULL;
}
void deleteAtpos(int idx){
     Node* temp=head;
     for(int i=1;i<idx-1;i++){
          temp=temp->next;
     }
     temp->next=temp->next->next;
}
};
int main(){
     Linkedlist l;
     l.InsertionAtHead(7);
     l.InsertionAtHead(3);
     l.InsertionAtHead(2);
     l.InsertionAtHead(9);
     l.InsertionAtHead(8);
     l.InsertionAtHead(5);
     l.InsertionAtHead(1);
     l.display();
     cout<<"After deletion at head"<<endl;
     l.deleteAtHead();
     l.display();
     cout<<"Deltetion at tail "<<endl;
     l.deleteAtTail();
     l.display();
     cout<<"delete at 3rd position "<<endl;
     l.deleteAtpos(3);
     l.display();
     return 0;
}