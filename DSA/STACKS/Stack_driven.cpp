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
          cout<<"Stack Overflow"<<endl;
     }
     else{
          top++;
          arr[top]=value;
     }
}
int pop(){
     if(isEmpty()){
          cout<<"Stack Underflow"<<endl;
          return 0;
     }
     else{
          int temp=arr[top];
          arr[top]=0;
          top--;
          return temp;
     }
}
int count(){
     return top+1;
}
int peek(){
     if(isEmpty()){
          cout<<endl<<"0 Then Stack is empty";
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
     cout<<endl;
}
};
int main(){
     Stack s;
     int option,value;
     do{
     cout<<"1. for push"<<endl;
     cout<<"2. for pop"<<endl;
     cout<<"3. for is Empty"<<endl;
     cout<<"4. for is Full"<<endl;
     cout<<"5. for peek"<<endl;
     cout<<"6. for count"<<endl;
     cout<<"7. for display"<<endl;
     cout<<"Enter the no. for operations OR for Exit Enter 0"<<endl;

     cin>>option;
     switch(option){
          case 0:
               break;
          case 1:
          cout<<"Enter the element to push ";
          cin>>value;
          s.push(value);
               break;
          case 2:
          cout<<"pop funtion for popping value "<<s.pop();
               break;
          case 3:
          if(s.isEmpty())
          cout<<"Stack is Empty"<<endl;
          else
          cout<<"Stack is not Empty"<<endl;
               break;
          case 4:
          if(s.isFull())
          cout<<"Stack is Full"<<endl;
          else
          cout<<"Stack is not Full"<<endl;
               break;
          case 5:
          cout<<"The top element at the stack is "<<s.peek()<<endl;
               break;
          case 6:
          cout<<"The total element is stake left is "<<s.count()<<endl;
               break;
          case 7:
          cout<<"Display Function Called - "<<endl;
          s.display();
               break;
          default:
          cout<<"Enter Proper Option number "<<endl;

     }
     }
     while(option!=0);

// Stack s;
// s.push(4);
// s.push(5);
// s.push(6);
// s.push(7);
// s.push(8);
// cout<<"The total elements in stack is"<<s.count()<<endl;
// s.display();
// s.pop();
// cout<<"After display"<<endl;
// s.display();
// cout<<"The top element is "<<s.peek();
    return 0;
}