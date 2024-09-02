#include <iostream>
using namespace std;

class Abstract {
public:
    virtual void showMessage() = 0; // Pure virtual function
};

class Concrete :Abstract {
public:
    void showMessage(){
        cout << "This is a Abstraction implementation." << endl;
    }
};

int main() {
    Concrete concreteObj;
    concreteObj.showMessage();
    
    return 0;
}
