
#include <iostream>   //implement cons and dest in derived class
using namespace std;


class Animal {
public:
    Animal() {
        cout << "Animal constructor\n";
    }
    ~Animal() {
        cout<<"Animal destructor\n";
    }
};

class Dog : public Animal {
public:
    Dog() : Animal() {
        cout << "Dog constructor\n";
    }
    ~Dog() {
        cout << "Dog destructor\n";
    }
};

int main() {
    Dog myDog;
    return 0;
}
