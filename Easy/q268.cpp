#include <iostream>
#include <vector>
using namespace std;

vector<int> missingNumber(vector<int>& nums, int n) {
    vector<int> v(n + 1, -1);
    for (int i = 0; i < n; i++) {
        v[nums[i]] = nums[i];
    }
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == -1) {
            return {i};
        }
    }
    return {n};
}

int main() {
    vector<int> nums = {3, 0, 1};
    int n = nums.size();

    vector<int> result = missingNumber(nums, n);
    for (int ans : result) {
        cout << ans << " ";
    }
    cout << endl;

    return 0;
}