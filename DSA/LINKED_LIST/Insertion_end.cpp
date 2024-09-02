#include<iostream>
using namespace std;
class Node{
public:
      int data;
      Node* next;
      Node(int value){
         data=value;
         next= NULL;
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
   void InsertionAtEnd(int value){
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
   Linkedlist ll;
   ll.InsertionAtEnd(4);
   ll.InsertionAtEnd(3);
   ll.InsertionAtEnd(5);
   ll.display();
   return 0;
}