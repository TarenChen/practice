#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool checkPermutation(string input, string input2) //check if length is same otherwise sort and check
{
    if(input.length() != input2.length())
        return false;
    sort(input.begin(), input.end());
    sort(input2.begin(), input2.end());
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] != input2[i])
            return false;
    }
    return true;
}

int main()
{
    string test = "hello";
    string test2 = "helll";
    cout << checkPermutation(test,test2) << endl;
}