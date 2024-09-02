#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
};

int main(){
	node* head= NULL;
	node* newnode;
	node* temp;
	int choice=1,pos,count =0,i=1,x;
	while(choice){
		newnode = new node;
		cout<<"Enter data ";
		cin>>newnode->data;
		newnode->next = NULL;
		if(head == NULL)
		head = temp =newnode;
		else{
			temp->next = newnode;
			temp = newnode;
		}
		cout<<"do you want to continue\n";
		cin>>choice;
	}
	cout<<"INITIALLY\n";
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\nInsertion at start(1),at end(2),particular position(3)\n";
	cin>>x;
	choice = 1;
	switch(x){
		case 1:
			while(choice){
			newnode = new node;
			cout<<"Enter data: ";
			cin>>newnode->data;
			newnode->next=head;
			head = newnode;
			cout<<"Do you want to continue\n";
			cin>>choice;
		}
		    break;
		case 2:
			while(choice){
			newnode = new node;
			cout<<"Enter data: ";
			cin>>newnode->data;
			newnode->next=NULL;
			temp = head;
			while(temp->next != NULL){
				temp= temp->next;
			}
			temp->next = newnode;
			cout<<"Do you want to continue\n";
			cin>>choice;
		}
		    break;
		case 3:
				cout<<"Enter Position ";
				cin>>pos;
			    temp = head;
			    while(temp != NULL){
			    	count++;
			    	temp = temp->next;
				}
			if(pos>count){
				cout<<"INsertion not possible\n";
			}
			else{
				newnode = new node;
			cout<<"Enter data: ";
			cin>>newnode->data;
			temp = head;
			while(i<pos){
				temp = temp->next;
				i++;
			}
			newnode->next = temp->next;
			temp->next = newnode;
			}
			break;
		}
		    
	cout<<"FINALLY\n";
	temp = head;
	while(temp != NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	return 0;
}