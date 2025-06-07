#include <iostream>
#include <vector>
using namespace std;

vector<int> findprefixSum(vector<int> &arr)
{
    int n = arr.size();
    vector<int> prefixSum(n);
    
    // Initialize the first element
    prefixSum[0] = arr[0];

    // Compute prefix sum for the rest
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    return prefixSum; // moved outside the loop
}

int main()
{
    vector<int> arr = {15, 50, 20, 40, 30};
    vector<int> prefixSum = findprefixSum(arr);
    
    for (auto i : prefixSum)
    {
        cout << i << " ";
    }

    return 0;
}
