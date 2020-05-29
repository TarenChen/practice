#include <iostream>
using namespace std;

template<typename T>
T Max(T val, T val2)
{
    return (val > val2) ? val : val2;
}

int main()
{
    cout << Max(1,2) << endl;
}