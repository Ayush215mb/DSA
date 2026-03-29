#include <iostream>

using namespace std;

/*
Single Responsibility Principle (SRP)
    -> Each component should have only one responsibility, ensuring that changes to one part of the software's specification do not affect others

    ->  a class should only have one responsibility
    -> it should only have one reason to change.

*/

class User
{
public:
    string name;
    string email;
    User(string name, string email)
    {
        this->name = name;
        this->email = email;
    }

    string getUserName()
    {
        return this->name;
    }
    string getUserEmail()
    {
        return this->email;
    }
};

class EmailService
{
public:
    void sendMail(string email, string message)
    {
        cout << "mail sent to " << email << " with the message : " << message << endl;
    }
};

int main()
{
    User Ayush("Ayush Yadav", "sidharth");
    EmailService emailService;

    string name = Ayush.getUserName();
    string email = Ayush.getUserEmail();

    emailService.sendMail(email, "Welcome to our platform");

    return 0;
}