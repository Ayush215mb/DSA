#include <iostream>
#include <map>
#include <string.h>
using namespace std;

int main()
{

    // Creating an empty multimap
    multimap<int, string> mm1;

    // Creating multimap using initializer list
    multimap<int, string> mm2 = {{1, "Geeks"},
                                 {2, "For"},
                                 {1, "C++"}};

    for (auto it = mm2.rbegin(); it != mm2.rend(); ++it)
    {
        cout << it->first << it->second << endl;
    }
    return 0;
}