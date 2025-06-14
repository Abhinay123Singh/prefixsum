#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>  // Needed for INT_MIN

using namespace std;

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    int maxSum = INT_MIN;

    for(int st = 0; st < n; st++)
    {
        int currSum = 0;

        for(int end = st; end < n; end++)
        {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    } 

    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}
