#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSubarrayLen(int target, vector<int>& nums) {
    int n = nums.size();
    int minLength = INT_MAX;
    int left = 0, sum = 0;

    for (int right = 0; right < n; right++) {
        sum += nums[right];
        
        while (sum >= target) {
            minLength = min(minLength, right - left + 1);
            sum -= nums[left];
            left++;
        }
    }

    return (minLength == INT_MAX) ? 0 : minLength;
}

int main() {
    int target;
    cin >> target;

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = minSubarrayLen(target, nums);
    cout << result << endl;

    return 0;
}
