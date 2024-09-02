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
int size(){
     Node* temp=head;
     int count=0;
     while(temp!=NULL){
          count++;
          temp=temp->next;
     }
     return count;
}
// void InsertionAtHead(int value){
//      Node* temp= new Node(value);
//      if(head==NULL){
//           head=temp;
//           tail=temp;
//      }
//      else{
//           temp->next=head;
//           head=temp;
//      }
// }
void Insert(int value){
     int idx=3;
     Node* temp=head;
     Node* t=new Node(value);
     for(int i=1;i<idx-1;i++){
          temp=temp->next;
     }
     t->next=temp->next;
     temp->next=t;
}

void InsertionAtTail(int value){
     Node* temp=new Node(value);
     if(head==NULL){
          head=temp;
          tail=temp;
     }
     else{
          tail->next=temp;
          tail=temp;
     }
}
};
int main(){
     Linkedlist l;
     // l.InsertionAtHead(4);
     // l.InsertionAtHead(5);
     // l.InsertionAtHead(3);
     // l.InsertionAtHead(6);
     // l.disply();
     l.InsertionAtTail(5);
     l.InsertionAtTail(3);
     l.InsertionAtTail(2);
     l.InsertionAtTail(0);
     l.InsertionAtTail(9);
     l.display();
     cout<<"Size of linkedlist is "<<l.size()<<endl;
     l.Insert(6);
     cout<<"After inserting at position 3 "<<endl;
     l.display();
     return 0;
}