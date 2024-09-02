#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class Linkedlist {
public:
    Node* head = NULL;
    Node* tail = NULL;

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << " ";
    }
    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
    }
    void reverse(Node* curr, Node* prev){
        if (curr == NULL){
            head = prev;
            return;
        }
        else{
        Node* next = curr->next;
        curr->next = prev;
        reverse(next, curr);
    }
    }
    void reverse(){
        reverse(head, NULL);
    }
};
int main() {
    Linkedlist ll;
    ll.insertAtHead(1);
    ll.insertAtHead(2);
    ll.insertAtHead(3);
    ll.insertAtHead(4);
    ll.display();
    cout<<endl; 
    cout <<"After reverse"<<endl;
    ll.reverse();
    ll.display();
    return 0;
}