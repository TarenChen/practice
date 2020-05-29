#include <iostream>
#include <string>
#include <set>

using namespace std;

string longestSubstring(string input)
{
    set<char> setChar;
    string res = "";
    string curr = "";
    int longest = 0;
    int currSize = 0;

    for(int i = 0; i < input.size(); i++)
    {
        for(int j = i; j < input.size(); j++)
        {
            for(int k = i; k <= j; k++)
            {
                if(setChar.count(input[k]) == 1)
                {
                    currSize = -1;
                    break;
                }
                else
                {
                    curr += input[k];
                    currSize++;
                    setChar.insert(input[k]);
                }
            }
            if(currSize > longest)
            {
                longest = currSize;
                res = curr;
            }
            curr = "";
            currSize = 0;
            setChar.clear();
        }
    }
    return res;
}

int main()
{
    string test = "abcabcbb"; //expect abc
    string test2 = "bbbbb";   // expect b
    string test3 = "pwwkew";  // expect wke


    cout << longestSubstring(test) << endl;
    cout << longestSubstring(test2) << endl;
    cout << longestSubstring(test3) << endl;
}