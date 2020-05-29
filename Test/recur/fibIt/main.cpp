#include <iostream>
using namespace std;

int fib(int input)
{
    if (input == 0)
        return 0;
    if (input == 1)
        return 1;
    int num1 = 0;
    int num2 = 1;
    int result = 0;
    for(int i = 2; i <= input; i++)
    {
        result = num1 + num2;
        num2 = result;
        num1 = num2;
    }
    return result;
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