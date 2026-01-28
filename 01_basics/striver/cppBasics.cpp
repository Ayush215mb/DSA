#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

// taking value as a parameter
void SampleFunc(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

// taking only the reference (memory address), all the changes to the parameter will be with the original value
void SampleFunc2(string &s)
{
    s[0] = 't';
    cout << s << endl;
}

void InputOutput()
{
    cout << "Ayush Yadav\n";
    int x;
    cin >> x;
    cout << "value of x is " << x;
}
void DataType()
{
    // integers, long, long long, float, double
    int y = 20;
    // to store long numbers
    long z = 100000000;
    // to store more long numbers
    long long xy = 101010100010;
    float a = 5.5;
    double b = 5.5;

    // strings and getline
    string s;
    // will only store a single word, after space it will not store it in this variable
    cin >> s;
    cout << s;

    string str;
    // can store the whole line
    getline(cin, str);
    cout << str;

    // char

    char ch = 'a';
    cin >> ch;
    cout << ch;

    // switch
    int day;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Error";
        break;
    }

    // Arrays-> use when you have to store many values of same data types; all elements are stored in sequence in the memory
    int array[5];
    // 2D Array -> like a matrix; used to solve matrix and graph problem
    int arr[3][5];

    // string store character inside it, think of it like an array of characters
    string stringss = "Ayush";
    const unsigned long long len = stringss.size();
    cout << stringss << endl;
    stringss[len - 1] = 'l';
    cout << stringss << endl
         << stringss[len - 1];
}
void loops()
{
    // For loops
    for (int i = 1; i <= 10; i = i + 2)
    {
        cout << "for" << i << endl;
    }

    // while loops
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i = i + 1;
    }
    cout << "After the while loop completed the i becomes 5" << endl;

    // do_while
    do
    {
        cout << "inside do ";
    } while (i <= 10);
}
void Functions()
{
    // Functions

    // pass by value
    const int number = 10;
    // just passing the value, the copy of original value so that anything done inside the function the original value doesn't changes
    SampleFunc(number);
    cout << number << endl;

    // pass by reference
    string s = "Hello World";
    // passing the reference(memory address) of the original value
    SampleFunc2(s);
}

int main()
{

    return 0;
}
