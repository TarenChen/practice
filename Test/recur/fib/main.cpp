#include <iostream>
using namespace std;

int fib(int input)
{
    if (input == 0)
        return 0;
    if (input == 1)
    {
        return 1;
    }
    return fib(input - 1) + fib(input - 2);
}

int main()
{
    cout << fib(0) << endl; //expect 0
    cout << fib(1) << endl; //expect 1
    cout << fib(2) << endl; //expect 1
    cout << fib(3) << endl; //expect 2
    cout << fib(4) << endl; //expect 3
    cout << fib(5) << endl;//expect 5
}