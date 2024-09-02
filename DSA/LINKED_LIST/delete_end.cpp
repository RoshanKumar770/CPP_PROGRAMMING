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
   Node* temp=new Node(value);
   if(head==NULL){
   head=temp;
   tail=temp;
   }
   else{
      temp->next=head;
      head=temp;
   }
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

};
int main(){
   Linkedlist ll;
   ll.InsertionAtHead(9);
   ll.InsertionAtHead(8);
   ll.InsertionAtHead(7);
   ll.InsertionAtHead(6);
   ll.InsertionAtHead(5);
   ll.display();
   cout<<"After deletion of element at end"<<endl;
   ll.deleteAtTail();
   ll.display();
   return 0;
}
