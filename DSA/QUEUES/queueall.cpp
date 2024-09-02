#include<iostream>
using namespace std;
class Queue{
private:
     int front;
     int rear;
     int arr[5];
public:
     Queue(){
          front=-1;
          rear=-1;
          for(int i=0;i<5;i++){
               arr[i]=0;
          }
     }
bool isEmpty(){
     if(front==-1 && rear==-1)
      return true;
     else
      return false;
}
bool isFull(){
     if(rear==4)
      return true;
     else
      return false;
}
void Enqueue(int value){
     if(isFull()){
          cout<<"The Queue is Full"<<endl;
          return ;
     }
     else if(isEmpty()){
          front=0;
          rear=0;
          arr[rear]=value;
     }
     else {
          rear++;
          arr[rear]=value;
     }
}
int Dequeue(){
     int x;
     if(isEmpty()){
          cout<<"Queue is Empty "<<endl;
     }
     else if(front==rear){
          x=arr[front];
          front=-1;
          rear=-1;
          return x;
     }
     else {
          x=arr[front];
          arr[front]=0;
          front++;
          return x;
     }
}
void dispaly(){
     for(int i=0;i<5;i++){
          cout<<arr[i]<<" ";
     }
}
};
int main(){
     Queue q;
     q.Enqueue(4);
     q.Enqueue(3);
     q.Enqueue(6);
     q.Enqueue(7);
     q.Enqueue(9);
     q.dispaly();
     cout<<"After Dequing"<<endl;
     q.Dequeue();
     q.dispaly();
     return 0;
}