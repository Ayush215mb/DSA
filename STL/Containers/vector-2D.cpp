#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // creating 2D array using vector
    // arr(number of rows, vector<int>(size of each ror or column))
    vector<vector<int>> arr(4, vector<int>(5, 0));
    // we created a 2D vector of 4 rows and 5 cols with initial value of each cell as "0"

    int totalRows = arr.size();
    int totalCols = arr[0].size(); // incase all rows have same number of cols

    // creating an array which have different elements in each row

    vector<vector<int>> brr(4); // 4 rows

    brr[0] = vector<int>(7); // 7 cols in first row
    brr[1] = vector<int>(2); // 2 cols in second row
    brr[2] = vector<int>(4); // 4 cols in third row
    brr[3] = vector<int>(5); // 5 cols in fourth row

    return 0;
}