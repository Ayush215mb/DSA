#include <iostream>

using namespace std;
/*
    Four Pillars: Inheritance, Polymorphism, Encapsulation, Abstraction

    1. Encapsulation :
        -> encapsulation is achieved by declaring data members as private and providing public getter and setter methods for controlled access.
        -> we can hide the data =  more security
        -> we can make class 'read only' so that the data cannot be changed
        -> unit testing

    2. Inheritance:
        -> It is a mechanism that allows a subclass (derived/child class) to acquire properties and behaviors (methods and attributes) from a superclass (base/parent class).
        -> This establishes an "is-a" relationship between classes, enabling code reusability, reducing redundancy, and simplifying maintenance by organizing code into a hierarchical structure.

        SuperClass           SubClass               Result

        Public                  Public              Public
        Public                  Protected           Protected
        public                  private             private

        Protected                Public              Protected
        Protected                Protected           Protected
        Protected                private             private

        private                  Public               N/A
        private                  Protected            N/A
        private                  private              N/A

        -> types:
            ~ single = A inherites from B

            ~ multi level =  D inherites from C which is also inherited from B which is      inherited from A, it creates a multi level inheritance.

            ~ multiple = C is inherited from both A and B creating a case of multiple inheritance. Implementation: class hybird: public Animal, public Human{};

            ~ hierarchical = one class servce as parent class for more than 1 class, A is the parent class of both B and C.

            ~ hybrid = combination of more than one type of inheritance

        -> Inheritance Ambiguity:
            If C is inherited from A and B, Both A and B have function with the same name then we use scope resolution to access the specific function from class
            example:
                obj.A::func();
                obj.B::func();


    3. Polymorphism
        -> Polymorphism in Object-Oriented Programming (OOP) is the ability of a function or method to behave differently based on the object or data type it interacts with, derived from the Greek words poly (many) and morph (forms).

        ->  It allows objects of different classes to be treated as objects of a common superclass or interface, enabling code reusability, flexibility, and scalability without modifying existing code.

        -> Types:
            ~ Compile-time (Static) Polymorphism = Achieved through method overloading (multiple methods with the same name but different parameters) or operator overloading, where the compiler determines which method to call based on the argument types.

            ~ Runtime (Dynamic) Polymorphism =  Achieved through method overriding (a subclass providing a specific implementation of a method defined in its superclass) or interface implementation, where the method to be executed is determined during program execution based on the actual object type.

    4. Abstraction:
        ->Abstraction is the fundamental principle of hiding unnecessary implementation details and exposing only the essential features of an object, allowing users to focus on what an object does rather than how it does it.
        -> https://stackoverflow.com/questions/742341/difference-between-abstraction-and-encapsulation

*/

class parent
{
public:
    string name; // 32 bytes
    int age;     // 4 bytes
    int height;  // 4bytes
    int weight;

    void setweight(int w)
    {
        this->weight = w;
    }
    int getAge()
    {
        return this->age;
    }
};

// inheritance
class child : public parent
{

public:
    string colour;
    void IQ()
    {
        cout << "child IQ" << endl;
    }
};

// polymorphism
class A
{
public:
    // function overloading
    //  agr hume function overloading krni h toh parameter chng krne hoga
    void sayHello()
    {
        cout << "Hello " << endl;
    }

    int sayHello(string name, int n)
    {
        cout << "Hello " << name << endl;
        return n;
    }

    void sayHello(char name)
    {
        cout << "Hello " << name << endl;
    }
    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

class B
{
public:
    int a;
    int b;

    int add()
    {
        return a + b;
    }

    // operator overloading
    void operator+(B &obj)
    {
        int value1 = this->a;
        int value2 = obj.a;

        cout << "output " << value2 - value1 << endl;
    }

    void operator()()
    {
        cout << "main bracket hu " << this->a << endl;
    }
};

// compile time polymorphism
class Animal
{
public:
    void speak()
    {
        cout << " Speaking " << endl;
    }
};

class Dog : public Animal
{
public:
    // agr explicitly function create krde with same name and same params toh last updated wala run krega
    void speak()
    {
        cout << " Barking " << endl;
    }
};

int main()
{
    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;

    obj1();

    Dog Haha;

    Haha.speak();

    return 0;
}