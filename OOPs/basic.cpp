#include <iostream>
#include "villain.cpp"
using namespace std;

// 3 access modifiers -> public, private, protected
// by default all are private
class Hero
{
private:
    int health; // 4 bytes
    char level; // 1 byte
public:
    char name[100]; // 100 bytes
    // static belongs to class and we don't need to create an object to access it.
    /*
    This is stored:
        once per class, not per object
        in a separate memory region (typically data segment)
    this is why we still get 108 as the size because static variable is stored separtely
    */
    static int timetoComplete;

    // empty default constructor
    Hero() {}
    // parametrised contructor
    Hero(int health, char level)
    {
        // this is pointer to current object
        this->health = health;
        this->level = level;
    }
    // custom copy constructor
    Hero(Hero &temp)
    {
        // we can customize the logic of copy constrcutor if  we need to add some more features

        /*
         1. default copy constructor does shallow copy both object would use the same data address
        */

        cout
            << "Copy constructor called" << endl;

        this->health = temp.health;
        this->level = temp.level;
    }
    // destructor
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getlevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }
    // static function used for accessing static variables and can't use this
    static void random()
    {
        cout << timetoComplete << endl;
    }
}; // 108 bytes, 3 bytes as padding

// initialize static varibale
int Hero::timetoComplete = 5;

int main()
{

    cout << "Static veriable: " << Hero::timetoComplete << endl;
    Hero::random();

    // static allocation and the destructor will also be called automatically
    Hero Ayush(220, 'A');
    Villain None;
    // dynamically allocation, manually call destructor to free the memory
    // Hero *h1 only declares a pointer variable and does NOT create an object.
    Hero *h1 = new Hero(Ayush);

    /*
    Why no compile error?
        C++ does not check pointer initialization at compile time. From the compiler’s perspective:

        The syntax is valid
        The type is correct

        So it compiles fine.
    */

    // (*h1).setLevel(5);
    // // better way of writing
    // h1->setHealth(100);

    cout << sizeof(Ayush) << endl;
    cout << sizeof(h1) << endl;
    cout << sizeof(None) << endl;

    cout << "Ayush health is " << Ayush.getHealth() << endl;
    cout << "h1 health is " << h1->getHealth() << endl;

    cout << "Ayush level is " << Ayush.getlevel() << endl;
    cout << "h1 level is " << (*h1).getlevel() << endl;

    // manual destructor call for h1
    delete h1;

    return 0;
}