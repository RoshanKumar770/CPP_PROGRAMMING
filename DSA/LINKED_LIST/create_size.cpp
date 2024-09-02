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
     int count=0;
     Node*temp=head;
     while(temp!=NULL){
          count++;
          temp=temp->next;
     }
     return count;
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
     ll.InsertionAtHead(40);
     ll.InsertionAtHead(30);
     ll.InsertionAtHead(20);
     ll.InsertionAtHead(10);
     ll.InsertionAtHead(0);
     ll.display();
     cout<<"Size of linkedlist is "<<ll.size();

     return 0;
}