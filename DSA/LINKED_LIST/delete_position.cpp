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
void deleteAtpostion(int idx){
   Node* temp=head;
   for(int i=1;i<idx-1;i++){
      temp=temp->next;
   }
   temp->next=temp->next->next;
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
};
int main(){
   Linkedlist ll;
   ll.InsertionAtHead(9);
   ll.InsertionAtHead(8);
   ll.InsertionAtHead(7);
   ll.InsertionAtHead(6);
   ll.InsertionAtHead(5);
   ll.display();
   cout<<"After deleting an element from head"<<endl;
   ll.deleteAtpostion(3);
   ll.display();
   return 0;
}