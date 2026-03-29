#include <iostream>

using namespace std;

/*
Dependency Inversion Principle (DIP):
    High-level modules should depend on abstractions (interfaces) rather than concrete implementations, reducing coupling between components

*/

class MessageSender
{
public:
    virtual void SendMessage(string receiver, string message) = 0;
    virtual ~MessageSender() {}
};

class EmailSender : public MessageSender
{
public:
    void SendMessage(string receiver, string message)
    {
        cout << "Sendig email message to " << receiver << " : " << message << endl;
    }
};

class SmsSender : public MessageSender
{
public:
    void SendMessage(string receiver, string message)
    {
        cout << "Sendig sms to " << receiver << " : " << message << endl;
    }
};

// high level module
class Notification
{
private:
    MessageSender &sender;

public:
    Notification(MessageSender &sender) : sender(sender) {}

    void notify(string receiver, string message)
    {
        sender.SendMessage(receiver, message);
    }
};

int main()
{
    EmailSender email;
    SmsSender sms;

    Notification emailNotification(email);
    Notification smsNotification(sms);

    emailNotification.notify("Ayush", "Hello via Email");
    smsNotification.notify("Ayush", "Hello via SMS");
}