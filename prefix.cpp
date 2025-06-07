#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int> arr) {
    int prefix = 0, total_sum = 0, n = arr.size();

    for(int i = 0; i < n; i++)
        total_sum += arr[i];

    for(int i = 0; i < n; i++) {
        prefix += arr[i];
        if(total_sum == 2 * prefix) // Fixed: use '==' instead of '=' and removed semicolon
            return true;
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cout << divide(v); // Moved outside the loop to avoid multiple evaluations
}
