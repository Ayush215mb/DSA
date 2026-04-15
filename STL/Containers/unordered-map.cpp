#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;
/*
Map:
 - associated container that stores key-value pairs

 - allows effient retrieval and modification of values based on key.

 - keys are unique within map
*/

int main()
{
    // creation
    unordered_map<string, string> table; // saare operation const time mei ho jaata h

    table["in"] = "India";                    // one way to add
    table.insert(make_pair("en", "Engalnd")); // second way
    pair<string, string> p;

    p.first = "br";
    p.second = "Brazils";
    table.insert(p); // third way

    cout << "size of table: " << table.size() << endl;

    // table.clear(); // clears everything

    if (table.empty() == true)
    {
        cout << "table is empty" << endl;
    }
    else
    {
        cout << "table is not empty" << endl;
    }

    // modifiyinh

    cout << table.at("in") << endl;

    table.at("in") = "hindustan";

    cout << table.at("in") << endl;

    table["in"] = "India";

    cout << table.at("in") << endl;

    unordered_map<string, string>::iterator it = table.begin();

    while (it != table.end())
    {
        pair<string, string> p = *it;
        cout << p.first << " " << p.second << endl;
        it++;
    }

    // table.erase(table.begin(), table.end());

    // find(key) = found -> returns the iterator of where it was found
    // = not found -> returns the iterator of last entry

    if (table.find("in") != table.end())
    {
        cout << "in key found" << endl;
    }
    else
    {
        cout << "in key not found" << endl;
    }

    if (table.find("im") != table.end())
    {
        cout << " im key found" << endl;
    }
    else
    {
        cout << "im key not found" << endl;
    }

    // count(key) -> returns the numer of elements with specified key (1 or 0 since map does not allow duplicate keys)

    if (table.count("in") == 1)
    {

        cout << "in key found" << endl;
    }
    if (table.count("im") == 0)
    {
        cout << "im key not found" << endl;
    }

    return 0;
}