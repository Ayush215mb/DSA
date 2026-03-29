#include <iostream>

using namespace std;

/*
Liskov Substitution Principle (LSP):
    Objects of a superclass should be replaceable with objects of a subclass without altering the program's correctness or causing unexpected behavior.
*/

class Shape
{
public:
    virtual int getArea() = 0; // pure virtual
};

class Rectange : public Shape
{
public:
    int width, height;
    Rectange(int width, int height)
    {
        this->height = height;
        this->width = width;
    }

    int getArea()
    {
        return this->height * this->width;
    }
};

class Square : public Shape
{
public:
    int side;
    Square(int side)
    {
        this->side = side;
    }

    int getArea()
    {
        return this->side * this->side;
    }
};

void printArea(Shape &shape)
{
    cout << "Area: " << shape.getArea() << endl;
}

int main()
{
    Rectange rect(10, 5);
    Square sqr(12);

    printArea(rect);
    printArea(sqr);
}