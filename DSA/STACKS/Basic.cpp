#include<iostream>
using namespace std;
class Stack{
private:
    int top;
    int arr[5];
public:
    Stack(){
        top=-1;
        for(int i=0;i<5;i++){
            arr[i]=0;
        }
    }
bool isFull(){
    if(top==4)
     return true;
    else
     return false;
}
bool isEmpty(){
    if(top==-1)
     return true;
    else
     return false;
}
void push(int value){
    if(isFull()){
        cout<<"Stack overflow "<<endl;
        return ;
    }
    else{
        top++;
        arr[top]=value;
    }
}
int count(){
    return top+1;
}
int pop(){
    if(isEmpty()){
        cout<<"Stack Underflow"<<endl;
    }
    else{
        int temp=arr[top];
        arr[top]=0;
        top--;
        arr[top]=temp;
        return temp;
    }
}
int peek(){
    if(isEmpty()){
        cout<<"Stack is Empty"<<endl;
        return 0;
    }
    else{
        return arr[top];
    }
}
void display(){
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<endl;
    }
}
};
int main(){
    Stack s;
    s.push(4);
    s.push(3);
    s.push(7);
    s.push(9);
    s.push(5);
    cout<<"Total element are "<<s.count()<<endl;
    s.display();
    cout<<"After popping"<<endl;
    s.pop();
    s.display();
    cout<<"The topmost element is "<<s.peek()<<endl;
    return 0;
}