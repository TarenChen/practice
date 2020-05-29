#include <iostream>
#include <string>

using namespace std;

string urlify(string input)
{
    string res = "";
    for(int i = 0; i < input.length(); i++)
    {
        if(input[i] == ' ')
        {
            res += "%20";
        }
        else
        {
            res += input[i];
        }
    }
    return res;
}

int main()
{
    string test = "taren x chen.com";
    cout << urlify(test) << endl;  //expected taren%20x%20chen.com
}