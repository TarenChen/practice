#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxSumBruteForce(vector<int> input)
{
    int maxSum = input[0];
    int tempSum = 0;
    for(int i = 0; i < input.size(); i++)
    {
        for(int j = 0; j < input.size(); j++)
        {
            for(int k = i; k <= j; k++)
            {
                tempSum += input[k];
                if(tempSum >= maxSum)
                {
                    maxSum = tempSum;
                }
            }
            tempSum = 0;
        }
    }
    return maxSum;
}

int maxSum(vector<int> input)
{
    int res = input[0];
    int temp = res;
    for(int i = 1; i < input.size(); i++)
    {
        temp = max(input[i], temp + input[i]);
        res = max(temp, res);
    }
    return res;
}

int main()
{
    vector<int> test = {-2,1,-3,4,-1,2,1,-5,4};
    cout << maxSum(test) << endl;
}