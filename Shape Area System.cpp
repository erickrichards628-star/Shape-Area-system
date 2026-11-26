#include <iostream>
#include <iomanip>

using namespace std;

// Abstract base class defining area interface
class Shape {
public:
    virtual double calculateArea() const = 0;
    virtual ~Shape() {}
};

class Circle : public Shape {
private:
    double radius;
    const double PI = 3.141592653589793;

public:
    Circle(double r) : radius(r) {}

    double calculateArea() const override {
        return PI * radius * radius;
    }
};

class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double calculateArea() const override {
        return length * width;
    }
};

int main() {
    Circle circle(7.0);
    Rectangle rectangle(8.0, 5.0);

    Shape* shapePtr = nullptr;

    cout << fixed << setprecision(2);

    shapePtr = &circle;
    cout << "Circle Area   : " << shapePtr->calculateArea() << "\n";

    shapePtr = &rectangle;
    cout << "Rectangle Area: " << shapePtr->calculateArea() << "\n";

    return 0;
}