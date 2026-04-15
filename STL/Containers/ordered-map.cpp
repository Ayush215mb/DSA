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

// everythig is same as the unordered map, just the time comlexity is different and it everything is ordered

// time complexity of ordered map is o(log N)
// timecomplexity of unordered mqp is o(1)
int main()
{
    // creation
    map<string, string> table; // saare operation const time mei ho jaata h

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

    map<string, string>::iterator it = table.begin();

    cout << "sorted map alphabetic order: " << endl;
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

    map<int, string> mp;

    mp.insert(make_pair(3, "ayush"));
    mp.insert(make_pair(1, "yadav"));

    mp.insert(make_pair(2, "ayushhhhhh"));

    map<int, string>::iterator it2 = mp.begin();

    cout << "\nOrdered map\n";
    while (it2 != mp.end())
    {
        pair<int, string> pr = *it2;
        cout << pr.first << " " << pr.second << endl;
        it2++;
    }
    return 0;
}