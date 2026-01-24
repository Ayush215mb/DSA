#include <iostream>

using namespace std;

void time_complexity()
{
    // Time Complexity-> rate at which the time taken increases with respect to the input size and NOT just the time taken by machine to run the code.

    // time complexity(TC) is defined by big O notation, thetha 0, omega
    // big O = worst case / Upper bond
    // theta 0= average complexity
    // Omega = best case / lowest bond

    // ### important Points
    // # Tc is computed in best case scenario, average case scenario and  worst case scenario
    // # avoid constants
    // # avoid lower values

    // example 01
    int marks;

    if (marks < 25)
    {
        cout << "grade D";
    }
    else if (marks < 45)
    {
        cout << "grade C";
    }
    else if (marks < 65)
    {
        cout << "grade B";
    }
    else
    {
        cout << "grade A";
    }

    // best case scenario
    // if marks = 10
    // then the number of operation is only 2(checks that marks is less then 25 and prints the string)-> O(2)

    // worst case scenario
    // marks =70
    // then we do 4 operations(check whether marks is <25,<45, <65 and then the else statement) -> O(4)

    // average case is (worst + best) / 2

    // ### we always test worst case to see how much our system can handle

    // Example 02

    int N;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // block of code
        }
    }

    //  O(N^2)

    // Example 03

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            // code
        }
    }

    // when i=0 -> j= 0 // first time the j runs one
    // when i=1 -> j= 0,1 // second time the j runs two time
    // when i=2 -> j=0,1,2
    //  .....
    // when i =N-1 -> j = 0,1,2,....., N-1 // in last j runs N time

    // if we add all of them
    // 1 + 2 +3 +... +N = sum of N narutal numbers= N(N+1)/2 = (N^2/2) + (N/2)

    // since N/2 is a constant we can remove it as it is not affecting the TC much
    // therefore O(N^2/2)
    // and similarly we can also remove /2
    // finally O (N^2)
}

void space_complexity()
{
    // Space complexity = auxilary space + Input space
    // also denoted by big O

    // auxilary space= space that we take to solve the problem
    // Input space= the space we take to store the input

    // example 01
    // taking a and b as input
    //  c = a+b
    // then a and b is Input space and c is auxilary space
    // in total we can say that it has space complexity of O(3)

    // abn array of size n will have space complexity(SC) big O(N)
}
int main()
{
}