//Implement an algoritmn to determine if a string has all unique characters. What if you can't use additional data structures?

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;


bool isUniqueBruteForce(string input) //o(n^2) 
{
    for(int i = 0; i < input.length() - 1; i++)
    {
        for(int j = i + 1; j < input.length(); j++)
        {
            if (input[i] == input[j])
            {
                return false;
            }
        }
    }
    return true;
} 

bool isUniqueSort(string input) //sort is o(n log n) then loop o(n)
{
    sort(input.begin(), input.end());
    for(int i = 0; i < input.length() - 1; i++)
    {
        if(input[i] == input [i+1])
        {
            return false;
        }
    }
    return true;
}

bool isUniqueSet(string input)   //using set o(n)
{
    set<char> test;
    for(int i = 0; i < input.length(); i++)
    {
        if(test.count(input[i]) > 0)
        {
            return false;
        }
        else
        {
            test.insert(input[i]);
        }
    }
    return true;
}

bool isUnique(string input)   //using set perhaps to just check how many elements are there
{
    set<char> test;
    for(int i = 0; i < input.length(); i++)
    {
        test.insert(input[i]);
    }
    if(test.size() != input.length())
        return false;
    return true;
}

int main()
{
    string testString = "Hello";
    string testString2 = "funn";

    cout << isUniqueSort(testString) << endl;
    cout << isUniqueSort(testString2) << endl;
}