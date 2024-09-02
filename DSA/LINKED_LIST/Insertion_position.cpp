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
void Insert(int value){
   int idx=2;
   Node* temp=head;
   Node* t=new Node(value);
   for(int i=1;i<idx-1;i++){
      temp=temp->next;
   }
   t->next=temp->next;
   temp->next=t;
}
};
int main(){
   Linkedlist ll;
   ll.InsertionAtHead(10);
   ll.InsertionAtHead(9);
   ll.InsertionAtHead(7);
   ll.display();
   cout<<"After insertion "<<endl;
   ll.Insert(8);
   ll.display();
   return 0;
}