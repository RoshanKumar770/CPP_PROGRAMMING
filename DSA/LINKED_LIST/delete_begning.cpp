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
};
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
void deleteAthead(){
   Node* temp=head;
   head->data=head->next->data;
   head->next=head->next->next;
}
};
int main(){
     Linkedlist ll;
     ll.InsertionAtHead(40);
     ll.InsertionAtHead(30);
     ll.InsertionAtHead(20);
     ll.InsertionAtHead(10);
     ll.InsertionAtHead(9);
     ll.display();
     cout<<"After delete an elements at begining "<<endl;
     ll.deleteAthead();
     ll.display();
     
     return 0;
}