#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int main()
{
    unordered_map<int,int> test;
    vector<int> arr = {1,1,2,2,1,2,3};

    for(int i = 0; unsigned(i) < arr.size(); i++)
    {
        test[arr[i]]++;
    }

    for(auto x : test)
    {
        cout << "KEY: " << x.first << " VALUE: " << x.second << endl;
    }
}