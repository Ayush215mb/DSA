#include <iostream>

using namespace std;

/*
Open-Closed Principle (OCP):
    Software entities should be open for extension but closed for modification, allowing new features to be added without altering existing code
*/

// base class for generat payment process
class PaymentProcessor
{

    void pay(int amount)
    {
        cout << "Paying $" << amount << endl;
    }
};

class PaypalProcessor : public PaymentProcessor
{
public:
    void pay(int amount)
    {
        cout << "Processing paypal payment of $" << amount << endl;
    }
};

class CreditCardProcessor : PaymentProcessor
{
public:
    void pay(int amount)
    {
        cout << "Processing credit card payment of $" << amount << endl;
    }
};

int main()
{
    PaypalProcessor paypal;
    CreditCardProcessor creditCard;

    paypal.pay(100);
    creditCard.pay(500);

    return 0;
}