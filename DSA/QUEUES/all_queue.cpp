#include <iostream>
using namespace std;

class queue{
    int* arr;
    int front,rear;
    int size;
    public:
    queue(int s){
        arr = new int[s];
        front = rear = -1;
        size = s;
    }

    bool isempty(){
        return front == -1;
    }
    bool isfull(){
        return rear == size-1;
    }
    void push(int n){
        if(isfull()){
            cout<<"queue is overflow\n";
            return;
        }
        else{
            if(isempty()){
            front = rear = 0;
            cout<<"Pushed element is "<<n<<endl;
            arr[rear] = n;
            }
            else{
                rear += 1;
                arr[rear] = n;
                cout<<"Pushed element is "<<n<<endl;
            }
        }
    }
    void pop(){
        if(isempty()){
          cout<<"queue is underflow\n";
          return ;
        }
        else if(front == rear){
            cout<<"poped element is: "<<arr[front]<<endl;
            front = rear = -1;
        }
        else{
            cout<<"poped element is: "<<arr[front]<<endl;
            front+=1;
        }
    }
    int start(){
        if(isempty()){
            cout<<"queue is empty\n";
            return -1;
        }
        else
        return arr[front];
    }
};

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    queue q(n);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    cout<<q.isfull();
    cout<<q.isempty();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.isempty();
    int x = q.start();
    // cout<<q.start();  // this will also print '-1' along with "queue is empty"
    return 0;
}