#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0; // pure virtual function

    virtual void display() { // virtual function
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
private:
    float radius;

public:
    Circle(float r) {
        radius = r;
    }

    float area() { // implementation of pure virtual function
        return 3.14 * radius * radius;
    }

    void display() { // override of virtual function
        cout << "This is a circle with radius " << radius << "." << endl;
    }
};

int main() {
    Shape* shapePtr; // create a pointer to a Shape object

    Circle c(5);
    shapePtr = &c;
    shapePtr->display();
    cout << "Area of circle: " << shapePtr->area() << endl;

    return 0;
}
